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

[MeterAnchor]
DynamicVariables=1
Meter=Image
X=-(#CURRENTCONFIGWIDTH# / 2)
Y=12

[MeterArrow]
DynamicVariables=1
Meter=Shape
Shape=Rectangle 0,0,20,20 | Fill Color #var.ColorBackground# | StrokeWidth 0 | Rotate 45
X=(#var.ArrowPosition# - #CURRENTCONFIGX# - 10)
Y=12

[MeterShadow]
DynamicVariables=1
Meter=Image
ImageName=#@#\Images\shadow.png
X=[MeterAnchor:x]
Y=12
W=(#var.WidgetWidth# + (#var.WidgetShadowWidth# * 2))
H=(#var.WidgetHeight# + #var.WidgetShadowBottom#)
ScaleMargins=63,63,63,63
ImageAlpha=200

[MeterBackground]
DynamicVariables=1
Meter=Shape
Shape= Rectangle 0, 0, #var.WidgetWidth#, #var.WidgetHeight#,#var.BorderRadius# | Fill Color #var.ColorBackground# | StrokeWidth 0
X=#var.WidgetShadowWidth#
Y=([MeterArrow:Y] + 10)
;SolidColor=#var.ColorBackground#
;W=#var.WidgetWidth#
;H=#var.WidgetHeight#

[Variables]
@IncludeVariables=#@#Variables.inc
@IncludeStylesheet=#@#Styles.inc
var.WidgetShadowWidth = 32
var.WidgetShadowBottom = 48