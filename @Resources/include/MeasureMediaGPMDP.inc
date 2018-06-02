[MeasureState]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=State
UpdateDivider=20

[MeasureStateButton]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=State
Substitute="0":"Play","1":"Pause","2":"Play"
UpdateDivider=20

[MeasureTrack]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=Title
Substitute="":"#NoTrackNameText#"
UpdateDivider=100

[MeasureTrack]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=Artist
Substitute="":"#NoArtistNameText#"
UpdateDivider=100

[MeasureCover]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=Cover
DefaultPath=#@#images\nocover.png
CoverPath=#@#images\coverGPMDP.png
Substitute="":"#@#images\nocover.png"
UpdateDivider=100

[MeasurePosition]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=Position
UpdateDivider=20

[MeasureDuration]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=Duration
UpdateDivider=20

[MeasureProgress]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=Progress
UpdateDivider=20

[MeasureAutoHideGPMDP]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=Status
IfBelowValue=1
IfBelowAction=[!HideFadeGroup "Spectrum"][!HideFadeGroup "SongInfo"][!Log "AutoHide: GPMDP was closed, hiding skin"]
IfAboveValue=0
IfAboveAction=[!ShowFadeGroup "Spectrum"][!ShowFadeGroup "SongInfo"][!Log "AutoHide: GPMDP was opened, showing skin"]
Disabled=(#EnableAutoHide# > 0 ? 0 : 1)
UpdateDivider=100