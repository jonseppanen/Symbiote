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

[MeterShadow]
DynamicVariables=1
Meter=Image
ImageName=#@#\Images\shadow.png
X=0
Y=-32
W=(#var.WidgetWidth# + (#var.WidgetShadowWidth# * 2))
H=(#var.WidgetHeight# + #var.WidgetShadowBottom#)
ScaleMargins=63,63,63,63

[MeterBackground]
DynamicVariables=1
Meter=Image
SolidColor=#var.SkinSolidColor#
X=#var.WidgetShadowWidth#
Y=0
W=#var.WidgetWidth#
H=#var.WidgetHeight#

[Variables]
@IncludeVariables=#@#Variables.inc
@IncludeStylesheet=#@#Styles.inc
var.WidgetShadowWidth = 64
var.WidgetShadowBottom = 96