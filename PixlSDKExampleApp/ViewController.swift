//
//  ViewController.swift
//  PixlSDKExampleApp
//
//  Created by Akhil Tolani on 07/11/22.
//

import UIKit
import PixlNFTsSDK
import PixlNFTsPlacementSDK

class ViewController: UIViewController, PixlNFTsSDKDelegate, PixlNFTsPlacementSDKDelegate {
    let pixlMintSC = PixlNFTs.init(license: "")
    let pixlPlacementVC = PixlNFTsPlacementViewController.init()

    override func viewDidLoad() {
        super.viewDidLoad()
        
        pixlMintSC.delegate = self
        
        pixlPlacementVC.delegate = self
        pixlPlacementVC.licenseKey = ""
        pixlPlacementVC.creatorWalletAddress = ""
        pixlPlacementVC.placementNFT = NFTAsset.init(token_address: "", token_id: "", metadata: "", name: "", token_uri: "", blockchain: "")
        
        self.smartContract()
        self.mintNFT()
    }

    func smartContract() {
        pixlMintSC.createSmartContract(ownerWalletAddress: "0x...", name: "NFT Smart Contract Name", symbol: "PXL")
    }
    func mintNFT() {
        pixlMintSC.mintNFT(destinationWalletAddress: "0x...", contractAddress:"0x...", nftName: "", nftDescription: "", nftImageURL: "", nftAttachmentURL: "", nftExternalURL: "")
    }
    
    
    //MARK: PixlNFTsSDKDelegate
    func didCompleteNFTMint(success: Bool, data: [String : Any], error: String?) {
        print("\(data)")
    }
    
    func didCompleteNFTSmartContract(success: Bool, data: [String : Any], error: String?) {
        print("\(data)")
    }
    
    //MARK: PixlNFTsPlacementSDKDelegate
    func didCompleteNFTPlacement(success: Bool, data: [String : Any], error: String?) {
        print("\(data)")
    }
}
