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

class ViewController: UIViewController, PixlNFTsSDKDelegate, PixlNFTsPlacementSDKDelegate, PixlNFTsDiscoverViewControllerDelegate {

    override func viewDidLoad() {
        super.viewDidLoad()
    }
    
    //MARK: Pixl AR NFTs
    @IBAction func showARNFTsPlacement(_ sender: Any) {
        let pixlPlacementVC = PixlNFTsPlacementViewController.init()
        pixlPlacementVC.delegate = self
        pixlPlacementVC.licenseKey = ""
        pixlPlacementVC.creatorWalletAddress = "0xb179603336B7580F0f845b1366D0c20A00995779" /*wallet address of the person placing the NFT*/
        pixlPlacementVC.placementNFT = NFTAsset.init(token_address: "0x8c0d8685afeaf558f271fd78e75e647f6357869b",
                                                     token_id: "35917987",
                                                     metadata: "{\"name\":\"Double Rainbow\",\"description\":\"Double Rainbow Wow!\",\"image\":\"https://firebasestorage.googleapis.com/v0/b/notifier-8eaa1.appspot.com/o/NFTs%2F1663987070.png?alt=media\",\"external_url\":\"\",\"animation_url\":\"\"}",
                                                     name: "Double Rainbow",
                                                     token_uri: "https://ipfs.moralis.io:2053/ipfs/bafkreigqpssejfeqiu2wbrbkieuphvmocamtdfbkxvbyhu33lc3srrhp6y",
                                                     blockchain: "polygon")
        self.present(pixlPlacementVC, animated: true)
    }

    @IBAction func showARNFTsDiscovery(_ sender: Any) {
        let pixlDiscoveryVC = PixlNFTsDiscoverViewController.init()
        pixlDiscoveryVC.delegate = self
        pixlDiscoveryVC.licenseKey = ""
        self.present(pixlDiscoveryVC, animated: true)
    }
    
    //MARK: Pixl NFTs
    func smartContract() {
        let pixlMintSC = PixlNFTs.init(license: "")
        pixlMintSC.delegate = self
        pixlMintSC.createSmartContract(ownerWalletAddress: "0xb179603336B7580F0f845b1366D0c20A00995779", /*wallet address of the owner of nft collection*/
                                       name: "NFT Collection Name", /*name of the NFT collection*/
                                       symbol: "PXL") /*any 3 letter word to show up as symbol*/
    }
    func mintNFT() {
        let pixlMintSC = PixlNFTs.init(license: "")
        pixlMintSC.delegate = self
        pixlMintSC.mintNFT(destinationWalletAddress: "0xb179603336B7580F0f845b1366D0c20A00995779", /*wallet address of the person reciving/creating the NFT*/
                           contractAddress:"0x...", /*smart contract created in smartContract() function*/
                           nftName: "NFT Name 1",
                           nftDescription: "NFT Description 1",
                           nftImageURL: "https://uploads-ssl.webflow.com/62ce91f02ab9f25fd63d192b/62d815e1407bd5ace724e13b_Pixl-Logo-1-p-500.png", /*any image URL*/
                           nftAttachmentURL: "", /*URL of any .usdz file if you want to show a 3D object, .mp3 for audio file*/
                           nftExternalURL: "") /*any url like https://google.com or https://pixlapp.xyz or something you'd want to show on opensea. Can be blank*/
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
    
    //MARK: PixlNFTsDiscoverViewControllerDelegate
    func didTapNFTinAR(viewController: PixlNFTsDiscoverySDK.PixlNFTsDiscoverViewController, NFT: PixlNFTsDiscoverySDK.NFTMetaverseItem) {
        print("Tapped NFT details - tokenID = \(NFT.tokenID ?? ""), contract_address = \(NFT.contractAddress ?? "")")
    }
}
