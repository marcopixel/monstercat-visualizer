# monstercat-visualizer
A visualizer for Rainmeter like the ones used in the Monstercat videos for Rainmeter.

A visualizer exactly like the ones used in the Monstercat videos for Rainmeter.
Supports all major media players (AIMP, iTunes, Winamp, VLC, etc...) and full Spotify support (thanks to .raptor for the Spotify plugin).

You need the newest version of Rainmeter Beta installed (3.3 or newer), otherwise the genre-based colors won't work!

This skin is not supported on Windows XP!

You might have to launch Spotify as Administrator to get the song information if it's not working.

Due to limitations of Rainmeter/the plugin used for the visualization the complete audio output of your system will be shown on the visualizer. For the best experience only play music. This is something I can’t fix.


- Features -


- Live visualization of the audio output
- Customizable colors and fonts
- Genre-based colors (AIMP, CAD, iTunes, WMP and Winamp)
- Support for all mayor media players
- Full Spotify support
- Media controls


- Changelog -


1.3.1
  - Added variable to flip the spectrum.
  - Fixed overflowing text by dynamically scaling the width of the text.

1.3
  - Added installer for easier set-up
  - Removed song information from visualizer skin and made it a own skin (better placement).
  - Updated to newest Spotify plugin for compability.

1.2.1
  - Simplyfied genre detection by replacing Substitute with IfMatch (much easier to modify and to detect genres)
  - Fixed background toggle.
  - Fixed that the cover would not hide on the normal skin, even with HideTrackInformations set to 2 (thanks to Mayooonaise)

1.2
  - Added Spotify support (thanks to .raptor for the Spotify plugin)
  - Genre-based colors (only supported on Rainmeter 3.3 and higher)
  - Optimized skin and code (much cleaner and better performing code)
  - Reduced file size by deleting Roboto font.
  - Improved text clipping.
  - Removed progress bar (too many bugs with the scaling option)

1.1
  - Added variable to scale the skin.
  - Added variables to disable/enable track informations and the progress bar.
  - Added media controls (alternative skin without media controls included).
  - Added a quick menu for easy access to the variables. (Right-Click on the skin -> "Open variables" to open)
  - Added an optional background for better visibility on brighter wallpapers. (Right-Click on the Visualizer -> "Toggle Background" to enable it)
  - Added dynamic text clipping to artist and title.
  - Added detailed informations to the variables file for easier installation/customization.
  - Changed fonts to Nexa Bold/Light (thanks to RekaVM on DeviantArt).
  - Tweaked the spectrum settings for an overall smoother look.
  - Reduced overall performance of the skin.

1.0
  - First release


- Release Notes -


- You need Rainmeter 3.3 (beta) or higher to get all features of this skin. You can find the newest version on rainmeter.net/.

- After installation right-click the visualizer and then press "Open Variables" in the menu. An file will open where you can change all the different settings of the skin.

- Due to limitations of Rainmeter/the plugin used for the visualization the complete audio output of your system will be shown on the visualizer. For the best experience only play music. This is something I can’t fix.


- Fixes -


Problem: The visualizer cuts off at the top.
Fix: Go to the volume mixer and lower the volume of Rainmeter or change the sensitivity in the variables.


- To-Do -


- Settings skin, for easier configuration
- Dynamic color change (maybe by detecting BPM?)
- Option to change the numbers of the bars to a value (results in cleaner code and easier customization)
- Complete Spotify support (will be added when the plugin is stable enough to ship it with the skin)


- Credits -

Rainmeter Skin - MarcoPixel 
AudioLevel Plugin (visualizer) - dgrace from the Rainmeter Forums
Spotify Plugin - .raptor from the Rainmeter Forums
Nexa Font - FontFabric (thanks to RekaVM for showing me the fonts)
Media controls icons - Material Design icons by Google (github.com/google/material-des…)
Monstercat 021 Artwork (used in the installer) - petirep 
Thanks to undefinist for letting me use his factory code (made everything so much easier and cleaner)
For bringing awesome music and artists to the community - Monstercat <3
For helping me with ideas (and being a real friend) - androidChris 

Disclaimer: The resources used in this skin are in no way endorsed by the respective owners. This skin is not affiliated with Monstercat and the artists.
