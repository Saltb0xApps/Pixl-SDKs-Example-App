//
//  ViewController.swift
//  PixlSDKExampleApp
//
//  Created by Akhil Tolani on 07/11/22.
//

import UIKit
import PixlNFTsSDK

class ViewController: UIViewController, PixlNFTsSDKDelegate {
    let pixlMintSC = PixlNFTs.init(license: "")

    override func viewDidLoad() {
        super.viewDidLoad()
        
        pixlMintSC.delegate = self
    }

    func smartContract() {
        pixlMintSC.createSmartContract(ownerWalletAddress: "0x...", name: "NFT Smart Contract Name", symbol: "PXL")
    }
    func mintNFT() {
        pixlMintSC.mintNFT(destinationWalletAddress: "0x...", contractAddress:"0x...", nftName: "", nftDescription: "", nftImageURL: "", nftAttachmentURL: "", nftExternalURL: "")
    }
    
    func didCompleteNFTMint(success: Bool, data: [String : Any], error: String?) {
        
    }
    
    func didCompleteNFTSmartContract(success: Bool, data: [String : Any], error: String?) {
        
    }
}
