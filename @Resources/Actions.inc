;========================================================================
;                        Actions file for Visor
;========================================================================
;   Here you can add generic share actions between your blocks and 
;   widgets. Don't put meter specific stuff here, keep it generic 
;   and dynamic.


[action.Block.Hover]
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor #var.SkinSolidColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor #var.SkinTransparentColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]

[action.Widget.Open]
MouseOverAction=[!SetOption MeasurePositionY String "(#CURRENTCONFIGY# + #CURRENTCONFIGHEIGHT#)" #CURRENTCONFIG#\widget][!UpdateMeasure "MeasurePositionY" #CURRENTCONFIG#\widget][!SetOption MeasureShow String "(#CURRENTCONFIGX# + (#CURRENTCONFIGWIDTH# / 2))" #CURRENTCONFIG#\widget][!UpdateMeasure "MeasureShow" #CURRENTCONFIG#\widget][!Show #CURRENTCONFIG#\widget][!Redraw]
MouseLeaveAction=[!Hide #CURRENTCONFIG#\widget][!Redraw]