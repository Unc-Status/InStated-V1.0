/**
  assetplug.h copyright( c ) UncStatus++ 
  This file is to plugin assets to the game
  File written by UncStatus++
  Praise The Lord For All Things!
*/
#ifndef ASSETPLUG_H
#define ASSETPLUG_H

#define ASSET_MAJOR "Asset Plugin"

#define ASSET_ERROR_FORMAT "Asset Format Extension Not Supported\n"

class AssetPlug{
public:
   AssetPlug();
   virtual ~AssetPlug();

   /**
    What Number Model It Is
   */
   int m_AssetNumberId;

   /**
    Asset Was Plugged In
   */
   bool bPluggedIn(const char * pAsset);

   /**
    Plugin Message Name
   */
   const char * cAssetPluginName = "Asset Plugin %5.2c\n";
};

#endif
