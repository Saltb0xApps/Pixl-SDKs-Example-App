# ``PixlNFTsPlacementSDK``

This is the Pixl NFTs Placement SDK. It provides iOS apps the ability to place NFTs in AR from on the Polygon Blockchain, without having to integrate any smart contracts or solidity code.
An additional benefit of this SDK is that it does not require the source wallet address to pay gas fees or share its private key.

You'll need a license key to initialise & use the SDK.

## Examples -

### Initialise Pixl SDK -
```
import PixlNFTsPlacementSDK

func initialisePixlSDK() {
    let pixlSDK = PixlNFTsPlacementViewController.init()
    pixlSDK.delegate = self
}
```

### show placement AR screen -
```
import PixlNFTsPlacementSDK

func showAR() {
    let pixlSDK = PixlNFTsPlacementViewController.init()
    pixlSDK.delegate = self
    pixlSDK.licenseKey = ""
    pixlSDK.placementNFT = NFTAsset.init(token_address: "", token_id: "", metadata: "", name: "", token_uri: "", blockchain: "polygon")
    pixlSDK.creatorWalletAddress = "0x..."
    self.present(pixlSDK, animated:true)

}

func didCompleteNFTPlacement(success: Bool, data: [String: Any], error: String?) {
    if success == true {
        print("\(data)")
    }
}
```
