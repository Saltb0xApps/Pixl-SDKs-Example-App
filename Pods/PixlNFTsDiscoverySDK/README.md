# ``PixlNFTsDiscoverySDK``

This is the Pixl NFTs Discovery SDK. It provides iOS apps the ability to discover NFTs in AR from on the Polygon Blockchain, without having to integrate any smart contracts or solidity code.
An additional benefit of this SDK is that it does not require the source wallet address to pay gas fees or share its private key.

You'll need a license key to initialise & use the SDK.

## Examples -

### Initialise Pixl SDK -
```
import PixlNFTsDiscoverySDK

func initialisePixlSDK() {
    let pixlSDK = PixlNFTsDiscoverViewController.init()
    pixlSDK.delegate = self
}
```

### show discovery AR screen -
```
import PixlNFTsPlacementSDK

func showAR() {
    let pixlSDK = PixlNFTsDiscoverViewController.init()
    pixlSDK.delegate = self
    pixlSDK.licenseKey = ""
    self.present(pixlSDK, animated:true)

}

func didTapNFTinAR(viewController: PixlNFTsDiscoverViewController, NFT: NFTMetaverseItem) {

}
```
