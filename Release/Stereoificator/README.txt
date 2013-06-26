Current binary download location: 

---------------------------------
////    HMD Stereoificator, a fork of VIREIO PERCEPTION    ////
---------------------------------
ALPHA quality software. Expect many bugs and problems. There are many things that are in worse shape than the current Vireio release. For example, Skyrim doesn't work at all at the moment with this fork.

*** DO NOT USE ONLINE with any game that has cheat prevention (VAC, Punkbuster, any mmo, etc) since the driver could be detected as a hack which may get you banned. ***


What's in it
---------------------------------
The core change in this fork is a near total rewrite of the rendering system so that both eyes are rendered every frame, this is significantly more complicated and there are still plenty of bugs to fix. The performance hit for this varies between hardware and games, it can be worse than 50% (of non-stereo frame rate) and it can be better. For example I get 65-70% of mono performance in HL2, but experimenting with Dead Rising 2 I was getting 35-40% of mono fps. Very little optimisation has been done so far and more isn't likely to happen until a lot more bugs are squashed.

This fork is also focusing on Head Mounted Display (HMD) support and all other stereo modes except side-by-side (which remains for testing purposes only and will not function well as a 3D mode as it is missing needed adjustments) have been removed.

A lot of the manual configuration of settings has been rendered unnecessary by updating the calculations to match the hardware optics in the same way the LibOVR SDK from Oculus works. All that should be required after the games settings are configured ('correct' fov is very important) is to adjust the eye separation using the f2/f3 keys while playing to somewhere that "feels right". This is still not ideal but it's workable and simpler to use. The quality of the default values varies quite a bit depending on what can be found in-game to be used to determine the approximate world scale.


HOT-KEYS:
---------------------------------
F2 / F3 : Adjust Separation. Hold shift to adjust 10x faster, hold ctrl to adjust 10x slower.

F6 : Swap Eyes.

F8 / F9 : Adjust Tracking Yaw.
SHIFT + F8 / F9 : Adjust Tracking Pitch.
CONTROL + F8 / F9 : Adjust Tracking Roll.


NOTES:
---------------------------------
- DO NOT USE ONLINE with any game that has cheat prevention (VAC, Punkbuster, any mmo, etc) since the driver could be detected as a hack which may get you banned.

- Set the game FoV. This varies depending on the game and can be a pain in the ass. The suggested value if possible is 110 degrees horizontal FoV (84 vertical at 16:10, 78 vertical at 16:9). Whatever you set the game FoV to you should set the corresponding profiles "horizontalFov" value to match. The profiles for each game are stored in Stereoificator/cfg directory in the profiles.xml file. The default FoVs for the profiles are 110 where it is possible to set the game to that value. Instructions for setting FoV in the various games are in the game notes at the end. 
- Enable vertical sync to avoid tearing.
- In general dynamic shadows don't work very well at the moment, turn them down and if that doesn't fix the problem then turn them off.
- Open HMD Stereoificator and leave it running in the background while playing.

- It is better to adjust all game settings before playing with the driver, as changing certain settings may cause the game to crash (i.e. changing the resolution - although this is a bug if it happens and reposting of the issue would be appreciated).
- The mouse icon may not be located where the cursor actually is. This is a known issue, click where the object you want to click on would be if the game was running normally without Stereoficator running.
- Bug reports and questions: https://github.com/ChrisJD/HMD-Stereoificator/issues


Experimental Game support. (Hint, it's all experimental)
Be sure to read the general notes above and game specific notes below, feedback with regard to which issues are the most disruptive to gameplay is appreciated to help prioritise tasks.
---------------------------------
If it isn't possbile for you to get the game world looking reasonable adjusting the settings please provide as descriptive a description of the problem as possible. Especially with regards to GRID, I have a feeling the car internals are getting scaled differently to the world but I can't pin down what's wrong looking at it on a monitor.

EGO Engine:
F1 2010
Dirt 2	
Dirt 3
GRID

UT3/UDK Engine:
Mirror's Edge
The Ball
Borderlands
Borderlands 2

Source Engine (bug fixes for these are very low priority given how good valves support of vr in source has been, flashlights in l4d are far worse than Vireio):
Half-Life 2 	
Left4Dead	
Left4Dead 2	
Dear Esther	
Portal
Portal 2

Other:
AaaaAAAAA!!!!!	





GAME NOTES:
---------------------------------

*If the notes say "Copy dlls", then copy 'd3d9.dll' and 'libfreespace.dll' from the bin directory of HMD Stereoificator to the same folder as the games executable.
If a Steam game won't launch via your normal method; 'run from Steam' or 'run the exe directly', then try the other.


AaaaAAAA!!!!: 
-Copy dlls*.


inMomentum: 
-F1 in game for console, then "togglehud" to turn the hud off.


Half-Life 2: 
-Set Shadow Detail to Medium. 
-Enable developers console (options->keyboard and mouse, advanced button down the bottom, enable developers console check box). 
-Access the console with tilde(~) and enter "sv_cheats 1", then "fov_desired 110" and "fov 110" (This doesn't work in the first chapter for some reason, they start working when you get a suit or weapon (I think)).


Dear Esther: 
-Enable developers console (in option->keyboard and mouse) then access the console with tilde(~) and enter "fov_desired 110"


Portal 2: 
-Enable developers console (in option->keyboard and mouse) then access the console with tilde(~) and enter "cl_fov 110"
-Use "r_shadows 0", "viewmodel_offset_y 8"


Mirror's Edge: 
-Copy dlls*.
-Won't launch unless I start through Steam (your mileage may vary). 

Optional:
-Disable mouse smoothing, highly recommended. http://pcgamingwiki.com/wiki/Mirror%27s_Edge#Mouse_Smoothing
-Fov change (recommended fov is 110), see http://pcgamingwiki.com/wiki/Mirror%27s_Edge#Field_of_view_.28FOV.29 for how you can change fov in Mirror's Edge
-IF you change the fov you also need to go to the Stereoificator/cfg directory and edit profiles.xml - find the Mirrors Edge entry and then change the value called "horizontlFov" to match the fov you are using.


The Ball: 
-Copy dlls*.
-Tilde(~) for console then "fov 110".


Borderlands: 
-Copy dlls*.
-Default FoV is way to small so a change is needed. FoV (set it to 110) change is easiest with the utility in this http://forums.gearboxsoftware.com/showpost.php?p=3863369&postcount=388 thread. There is a working link in that post. FoV resets a lot in Borderlands so I always use the set FoV on forward option.

Optional:
-HUD should probably be disabled, http://borderlands.wikia.com/wiki/Borderlands_PC_Tweaks#Show.2FHide_HUD (haven't tested this)


Borderlands 2:
-Disable dynamic shadows (Instructions: http://forums.gearboxsoftware.com/showthread.php?t=150107)
-Launch game via Borderlands2.exe (don't launch through Steam)
-In the game options menu go to 'Video' and move the 'Field of View' slider all the way to the right (110).

Optional:
-Enable console (Instructions: http://forums.gearboxsoftware.com/showthread.php?p=2763900)
-Disable HUD in console using "ToggleHUD"



EGO Engine games:

-I recommend using one of the opentrack builds in this post: http://www.mtbs3d.com/phpBB/viewtopic.php?f=141&t=17594 for the motion tracking. Just set HMD Stereoificator's tracking setting to "no tracking" while using opentrack. It injects the tracking data into the game via the trackir interface which is a much better way to go than mouse emulation, and if you have a hydra to strap to your head you get 6DOF.
-The FoV is _far_ to small and needs to be changed (see comparison here: http://imgur.com/a/yz68S). The easiest way to make the change is to go and get the fov changer utility from http://www.nogripracing.com/forum/showpost.php?p=1382564&postcount=18 (you'll need to register with the forum to be able to download it), (alternate download location http://forums.pcgamingwiki.com/viewtopic.php?f=23&t=229 - untested). It works with all the EGO games listed here, just point it to the games directroy. You probably want to make a backup of the car files (easiest just to backup the entire game directory) before making any changes. I only change the cockpit fov as that's the only place I want to play from. More details on fov changing in DiRT3 http://pcgamingwiki.com/wiki/DiRT_3#Field_of_view_.28FOV.29
-DirectX9 mode needs to be forced if you have a 10/11 card for all EGO games (except possibly GRID?). DirectX9 is forced in the configuration file "My Documents\My Games\GAME_NAME\hardwaresettings\hardware_settings_config.xml" where GAME_NAME is DiRT2, DiRT3, FormulaOne
-Shadows need to be on the lowest setting without turning them off (all though you can turn them off if you want).
-Disable all HUD/OSD elements.

DiRT 2: Run via dirt2.exe
GRID: Run via GRID.exe

DiRT 3 and F1 2010:
-Copy dlls*.
-For me they won't launch unless I start them through Steam and occasionally it takes 2 or 3 tries before they work without an error.