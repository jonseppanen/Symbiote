[MeasureStatus]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Status

[MeasurePlayPause]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=State
Substitute="0":"Play","1":"Pause","2":"Play","3":"Replay"

[MeasureProgress]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Progress
AverageSize=4

[MeasureRepeat]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Repeat
;An example of how to change and color the icon based on the repeat state
IfCondition=MeasureRepeat = 0
IfTrueAction=[!SetOption MeterRepeat ImageTint "#Color#"][!SetOption MeterRepeat ImageName "#CURRENTPATH#repeat.png"]
IfCondition2=MeasureRepeat = 2
IfTrueAction2=[!SetOption MeterRepeat ImageTint "#Highlight#"][!SetOption MeterRepeat ImageName "#CURRENTPATH#repeatOne.png"]
IfCondition3=MeasureRepeat = 1
IfTrueAction3=[!SetOption MeterRepeat ImageTint "#Highlight#"][!SetOption MeterRepeat ImageName "#CURRENTPATH#repeat.png"]


