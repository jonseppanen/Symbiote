[Rainmeter]
Update=100
BackgroundMode=2
DynamicWindowSize=1
SolidColor=#var.SkinSolidColor#

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

[Variables]
@IncludeVariables=#@#Variables.inc
@IncludeStylesheet=#@#Styles.inc