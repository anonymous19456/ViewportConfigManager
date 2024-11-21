# Viewport Config Manager
## Info

- Unreal v5.4.4
- Made with C++ and Editor Utility Blueprints
- Plugin that allows you to save and load viewport configurations.  Differs from Unreal’s built-in Save/Load Layout functionality because it only focuses on the Level Editor Viewports, and it persists the settings and arrangement of those viewports panels.  Unreal’s built in functionality does not do this (to my knowledge).

## Installation

**There are 2 ways to get the plugin onto your computer:**

Via GitBash: This way allows you to pull updates without re-downloading the entire plugin
1. Make sure you have Git installed.  You can download it here: https://git-scm.com/
2. Open GitBash and navigate to your Unreal Engine Plugins folder using the `cd` command, be sure to choose the correct engine version.
   1. Example: `cd "C:\Program Files\Epic Games\UE_5.4\Engine\Plugins`
   2. Alternatively, you can navigate to the Plugins directory in your file browser, right click, and select "Open Git Bash here."
3. Use the `git clone` command followed by `https://github.com/anonymous19456/ViewportConfigManager` to clone the repository inside your Plugins folder.
   1. `git clone "https://github.com/anonymous19456/ViewportConfigManager"`
4. Now type: `cd ViewportConfigManager` to enter the repository.
5. To switch to the branch that matches your Unreal version type: `git checkout UE_x.x`, replace "x.x" with your engine version
	1. ie. `git checkout UE_5.5`
 	2. This won't work if you try to switch to a non-existent branch, so make sure you check the repository page to see what versions of Unreal this plugin supports.
6. To pull any updates use `git pull origin [branch_name]` after navigating into the Plugin folder using GitBash
	1. ie. `git pull origin UE_5.5`   

Via Download: You might prefer this way if you don't enjoy typing things into the Command Prompt
1. Navigate to the branch that matches your Unreal Engine version (ie. 5.3, 5.4, etc).
2. Click on the "Code" tab and select "Download ZIP".
3. Once the zip file is finished downloading, navigate to you Unreal Engine Plugins folder, make sure it's the same engine version as the plugin.
    1. Example path: `C:\Program Files\Epic Games\UE_5.4\Engine\Plugins`
4. Unzip the plugin folder and place that unzipped folder into the Engine Plugins folder.

**Enabling the Plugin**

1. Open the Unreal project that you'd like to enable the plugin for. If the project is already open, close it and re-open it.
2. Go to Edit > Plugins, search for "Viewport Config Manager" and enable the plugin.

## Using the Plugin

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

- If you save a config and give it the same name as an existing config, you will overwrite the existing config.
- Do not open multiple tool windows at the same time.  You may end up trying to load or delete a config that does not exist, which will result in an error.
- For some reason my tool windows start off way larger than they need to be.  Right now I’m not sure how to fix it but they can be manually resized.
- To see messages solely related to the Viewport Configuration Manager in the Output Log, search `ViewportConfigPlugin`.
- You must have a Level Editor tab open in order to access the Viewport Config Manager menu.
- When Saving and Loading configs, the changes are applied to the active viewport, so make sure that you have the correct viewport window selected.
- The Configurations are saved inside of the plugins `Resource` folder.  So if you choose to install the plugin directly to the Project files and you are using  version control, other people with access to that project can also access your configs unless your plugins folder is excluded from the version control.
- If you open the editor and see a window like the one below, navigate to the tool in the menu hierarchy and re-open it.  Sometimes this happens when you leave a tool window open when closing the editor.
    
    ![image.png](/Resources/ReadMeImages/NoDockedTabsErrorWindow.png)
