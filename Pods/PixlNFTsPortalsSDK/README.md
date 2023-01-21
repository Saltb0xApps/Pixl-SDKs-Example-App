# ``PixlNFTsPortalsSDK``

This is the Pixl NFTs Portals SDK. It provides iOS apps the ability to open NFT portals in AR from on the Polygon Blockchain, without having to integrate any smart contracts or solidity code.

You'll need a license key to initialise & use the SDK.

## Examples -
### show portals AR screen -
```
import PixlNFTsPortalsSDK

func showAR() {
    let pixlSDK = PixlNFTsPortalsViewController.init()
    pixlSDK.portalType = "1"
    pixlSDK.licenseKey = ""
    pixlSDK.portalsNFT = [NFTAsset.init(token_address: "", token_id: "", metadata: "", name: "", token_uri: "", blockchain: "polygon"), NFTAsset.init(token_address: "", token_id: "", metadata: "", name: "", token_uri: "", blockchain: "polygon"), NFTAsset.init(token_address: "", token_id: "", metadata: "", name: "", token_uri: "", blockchain: "polygon"), NFTAsset.init(token_address: "", token_id: "", metadata: "", name: "", token_uri: "", blockchain: "polygon")]
    self.present(pixlSDK, animated:true)

}
```
