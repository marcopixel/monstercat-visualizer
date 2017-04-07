[MeasureState]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=State
UpdateDivider=10

[MeasureGPMDPStatus]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=ConnectionStatus
IfEqualValue=1
IfEqualAction=[!ActivateConfig "#ROOTCONFIG#\Settings\misc\auth" "GPMDPAuth.ini"]
UpdateDivider=100

[MeasureStateButton]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=State
Substitute="0":"Play","1":"Pause","2":"Play"

[MeasureTrack]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=Title
Substitute="":"#NoTrackNameText#"
UpdateDivider=100

[MeasureArtist]
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
Paused=#ShowMonstercatCover#
UpdateDivider=50

[MeasurePosition]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=Position
UpdateDivider=10

[MeasureDuration]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=Duration
UpdateDivider=10

[MeasureProgress]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=Progress
AverageSize=20
UpdateDivider=10

[MeasureAutoHideGPMDP]
Measure=Plugin
Plugin=GPMDPPlugin
PlayerInfo=Status
IfEqualValue=0
IfEqualAction=[!HideFade][!HideFade "#ROOTCONFIG#\Song Information"]
IfAboveValue=0
IfAboveAction=[!ShowFade][!ShowFade "#ROOTCONFIG#\Song Information"]
Disabled=#DisableAutoHide#
UpdateDivider=100
