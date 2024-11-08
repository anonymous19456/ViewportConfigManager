# Viewport Config Manager
## Info

- Unreal v5.4.4
- Made with C++ and Editor Utility Blueprints
- Plugin that allows you to save and load viewport configurations.  Differs from Unreal’s built-in Save/Load Layout functionality because it only focuses on the Level Editor Viewports, and it persists the settings and arrangement of those viewports panels.  Unreal’s built in functionality does not do this (to my knowledge).

## Installation

To add the plugin to your project:

1. Make sure you have Git installed.  You can download it here: https://git-scm.com/ 
2. Open GitBash and navigate to your Unreal Engine 5.4 Plugins directory using the `cd` command.
   1. `cd C:\Program Files\Epic Games\UE_5.4\Engine\Plugins`
4. Use the `git clone` command followed by `https://github.com/anonymous19456/ViewportConfigManager` to clone the repository inside you Plugins folder.
   1. `git clone https://github.com/anonymous19456/ViewportConfigManager`
6. To update the plugin use the `git pull` command after navigating back to the repository using GitBash, which will pull the latest updates.

## Using the Tool

1. Set up the viewport to your liking and navigate to “Window > Viewport Config Manager > Save  Config” at the top of the main window.  This will only work if you have the Level Editor open.
    
    ![image.png](/Resources/ReadMeImages/VpConfigManagerMenu.png)
    
2. Type in a name for your viewport configuration and press “Save.”  I would advise against using special characters in your name because it might not save properly.  For good measure avoid characters that Windows would typically prevent you from using in a file name.
    
    ![image.png](/Resources/ReadMeImages/SaveVpConfigWindow.png)
    
3. To load back your saved config, navigate to the Viewport Config Manager like before but select “Load Config.”  Select the configuration you’d like to load from the drop-down menu and press “Load”.
    
    ![image.png](/Resources/ReadMeImages/LoadVpConfigWindow.png)
    
4. To delete an existing config, navigate to the Viewport Config Manager menu and select “Delete Config.”  Select the configuration you want to delete from the drop-down menu and press “Delete.”
    
    ![image.png](/Resources/ReadMeImages/DeleteVpConfigWindow.png)
    

## Saved Properties

Below is a list of all the Level Editor Viewport properties that are saved and loaded by this plugin:

- Level Viewport Arrangement (One Pane, Two Pane Vertical, Four Pane 2x2 etc.)
- Viewport Type (Perspective, Top, Right, etc.)
- View Mode (Lit, Unlit, Wireframe, etc.)
- Show Flags (Anti-Aliasing, Atmosphere, BSP, etc.)
- Stat (AI, AI Behavior Tree, AI Crowd, etc.)
- Show FPS
- Show Stats
- Realtime
- Game View
- Allow Cinematic Control

## Additional Notes

- If you save a config and give it the same name and an existing config, you will overwrite the existing config.
- Do not open multiple tool windows at the same time.  You may end up trying to load or delete a config that does not exist, which will result in an error.
- For some reason my tool windows start off way larger than they need to be.  Right now I’m not sure how to fix it but they can be manually resized.
- To see messages solely related to the Viewport Configuration Manager in the Output Log, search `ViewportConfigPlugin`.
- You must have a Level Editor tab open in order to access the Viewport Config Manager menu.
- When Saving and Loading configs, the changes are applied to the active viewport, so make sure that you have the correct viewport window selected.
- The Configurations are saved inside of the plugins `Resource` folder.  So if you choose to install the plugin directly to the Project files and you are using  version control, other people with access to that project can also access your configs unless your plugins folder is excluded from the version control.
- If you open the editor and see a window like the one below, navigate to the tool in the menu hierarchy and re-open it.  Sometimes this happens when you leave a tool window open when closing the editor.
    
    ![image.png](/Resources/ReadMeImages/NoDockedTabsErrorWindow.png)
