;========================================================================
;                      Block template for blocks
;========================================================================
;   This is the base template for all blocks. Import it to get all
;   base/generic settings and tooling into your blocks.


[Rainmeter]
Update=10
DefaultUpdateDivider=50
DynamicWindowSize=1

[MeasureStart]
UpdateDivider=-1
Measure=calc
DynamicVariables=1
OnUpdateAction=[!ZPos 2]

[MeasureWidgetCheck]
UpdateDivider=-1
Measure=Plugin
Plugin=FolderInfo
Folder=#CURRENTPATH#widget

[MeasureWidgetLoad]
UpdateDivider=-1
DynamicVariables=1
Measure=Calc
Formula=MeasureWidgetCheck
IfAboveValue=0
IfAboveAction=[!ActivateConfig "#CURRENTCONFIG#\widget" "widget.ini"]

[Variables]
@IncludeVariables=#@#Variables.inc
@IncludeStylesheet=#@#Styles.inc
@IncludeActions=#@#Actions.inc
@IncludeShapes=#@#Shapes.inc