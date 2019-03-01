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
OnUpdateAction=[!ZPos 2][!ActivateConfig "#CURRENTCONFIG#\widget" "widget.ini"]

[Variables]
@IncludeVariables=#@#Variables.inc
@IncludeStylesheet=#@#Styles.inc
@IncludeActions=#@#Actions.inc
@IncludeShapes=#@#Shapes.inc