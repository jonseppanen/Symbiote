;========================================================================
;                     Widget Template for Widgets
;========================================================================
;   All widgets use the below measures and meters on load.


[Rainmeter]
Update=100
BackgroundMode=1
DynamicWindowSize=1

[MeasureStart]
UpdateDivider=-1
Measure=calc
DynamicVariables=1
OnUpdateAction=[!RainmeterHide][!ClickThrough 1][!ZPos 2]

[MeasurePositionY]
UpdateDivider=-1
DynamicVariables=1
Measure=String
String=''

[MeasureShow]
UpdateDivider=-1
DynamicVariables=1
Measure=String
String=''
OnUpdateAction=[!Move "([MeasureShow] - (#CURRENTCONFIGWIDTH# / 2))" [MeasurePositionY] ]

[MeterArrow]
DynamicVariables=1
Meter=Shape
Shape=Rectangle 0,0,20,20 | Fill Color 0,0,0,255 | StrokeWidth 0 | Rotate 45
X=(#CURRENTCONFIGWIDTH# / 2 - 10)
Y=12

[MeterShadow]
DynamicVariables=1
Meter=Image
ImageName=#@#\Images\shadow.png
X=(-(#CURRENTCONFIGWIDTH# / 2) + 12)r
Y=8
W=(#var.WidgetWidth# + (#var.WidgetShadowWidth# * 2))
H=(#var.WidgetHeight# + #var.WidgetShadowBottom#)
ScaleMargins=63,63,63,63

[MeterBackground]
DynamicVariables=1
Meter=Image
SolidColor=#var.SkinSolidColor#
X=#var.WidgetShadowWidth#
Y=([MeterArrow:Y] + 10)
W=#var.WidgetWidth#
H=#var.WidgetHeight#

[Variables]
@IncludeVariables=#@#Variables.inc
@IncludeStylesheet=#@#Styles.inc
var.WidgetShadowWidth = 64
var.WidgetShadowBottom = 96