/**
  assetplug.h copyright( c ) UncStatus++ 
  This file is to plugin assets to the game
  File written by UncStatus++
  Praise The Lord For All Things!
*/

/**
 Assets Are 3D Models Or Textures
*/

#ifndef ASSETPLUG_H
#define ASSETPLUG_H

#define ASSET_MAJOR "Asset Plugin"

#define ASSET_ERROR_FILE "Asset File Corrupt Cannot Open Asset File\n"

#define ASSET_TYPE_MODEL 0x0
#define ASSET_TYPE_TEXTURE 0x1

class AssetPlug{
public:
   AssetPlug();
   virtual ~AssetPlug();

   /**
    What Number Model It Is
   */
   int AssetNumberId;

   /**
    Asset Was Plugged In
   */
   bool bPluggedIn(const char * pAsset);

   /**
    Plugin Message Name
   */
   const char * cAssetPluginName = "Asset Plugin %5.2c\n";

   /**
    Asset Type Group
   */
   enum eAssetType{
        eAssetModel = 0x0,
        eAssetTexture = 0x1
   }

  virtual void ParseAssestType(AssetPlug &asset, int pType) = 0;

};

#endif
