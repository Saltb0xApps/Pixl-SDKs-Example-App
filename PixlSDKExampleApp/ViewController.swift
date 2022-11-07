//
//  ViewController.swift
//  PixlSDKExampleApp
//
//  Created by Akhil Tolani on 07/11/22.
//

import UIKit
import PixlNFTsSDK
import PixlNFTsPlacementSDK
import PixlNFTsDiscoverySDK

class ViewController: UIViewController {
    
    let pixlMintSC = PixlNFTsSDK.init(license: "")
    let pixlDiscovery = PixlNFTsDiscoverySDK.init()
    let pixlPlacement = PixlNFTsPlacementSDK.init()

    override func viewDidLoad() {
        super.viewDidLoad()
    }

    func smartContract() {
        pixlMintSC.createSmartContract(ownerWalletAddress: "0x...", name: "NFT Smart Contract Name", symbol: "PXL")
    }
    func mintNFT() {
        pixlMintSC.mintNFT(destinationWalletAddress: "0x...", contractAddress:"0x...", nftName: "", nftDescription: "", nftImageURL: "", nftAttachmentURL: "", nftExternalURL: "")
    }
}
