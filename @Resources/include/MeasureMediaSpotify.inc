[MeasureState]
Measure=Plugin
Plugin=SpotifyPlugin
Type=Playing
UpdateDivider=20

[MeasureStateButton]
Measure=Plugin
Plugin=SpotifyPlugin
Type=Playing
Substitute="0":"Play","1":"Pause","2":"Play"
UpdateDivider=20

[MeasureTrack]
Measure=Plugin
Plugin=SpotifyPlugin
Type=TrackName
Substitute="":"#NoTrackNameText#"
UpdateDivider=100

[MeasureArtist]
Measure=Plugin
Plugin=SpotifyPlugin
Type=ArtistName
Substitute="":"#NoArtistNameText#"
UpdateDivider=100

[MeasureCover]
Measure=Plugin
Plugin=SpotifyPlugin
Type=AlbumArt
Res=300
DefaultPath=#@#images\nocover.png
CoverPath=#@#images\coverSpotify.png
Substitute="":"#@#images\nocover.png"
UpdateDivider=100

[MeasurePosition]
Measure=Plugin
Plugin=SpotifyPlugin
Type=Position
UpdateDivider=20

[MeasureDuration]
Measure=Plugin
Plugin=SpotifyPlugin
Type=Length
UpdateDivider=20

[MeasureProgressPrecent]
Measure=Plugin
Plugin=SpotifyPlugin
Type=Progress
UpdateDivider=20

[MeasureProgress]
Measure=Calc
Formula=MeasureProgressPrecent*100
MinValue=0
MaxValue=100
UpdateDivider=20

[MeasureAutoHideSpotify]
Measure=Plugin
Plugin=Process
ProcessName=Spotify.exe
IfEqualValue=-1
IfEqualAction=[!HideFadeGroup "Spectrum"][!HideFadeGroup "SongInfo"][!Log "AutoHide: Spotify was closed, hiding skin"]
IfAboveValue=-1
IfAboveAction=[!ShowFadeGroup "Spectrum"][!ShowFadeGroup "SongInfo"][!Log "AutoHide: Spotify was opened, showing skin"]
Disabled=(#EnableAutoHide# > 0 ? 0 : 1)
UpdateDivider=100