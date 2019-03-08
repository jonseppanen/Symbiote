;========================================================================
;                        Actions file for Visor
;========================================================================
;   Here you can add generic share actions between your blocks and 
;   widgets. Don't put meter specific stuff here, keep it generic 
;   and dynamic.


[action.Block.Hover]
MouseOverAction=[!SetOption #CURRENTSECTION# HoverColorState "Stroke Color #var.ColorHover# | Fill Color #var.ColorHover#"][!SetOption #CURRENTSECTION# HoverSubColorState "Stroke Color #var.ColorAccentDark# | Fill Color #var.ColorAccentDark#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# HoverColorState "Stroke Color #var.ColorMain# | Fill Color #var.ColorMain#"][!SetOption #CURRENTSECTION# HoverSubColorState "Stroke Color #var.ColorNeutralLight# | Fill Color #var.ColorNeutralLight#"][!UpdateMeter #CURRENTSECTION#][!Redraw]

[action.Widget.Open]
MouseOverAction=[!SetOption MeasurePositionY String "(#CURRENTCONFIGY# + #CURRENTCONFIGHEIGHT#)" #CURRENTCONFIG#\widget][!SetVariable var.ArrowPosition "(#CURRENTCONFIGX# + (#CURRENTCONFIGWIDTH# + #var.BlockWidth#) / 2)" #CURRENTCONFIG#\widget][!UpdateMeter "MeterArrow" #CURRENTCONFIG#\widget][!UpdateMeasure "MeasurePositionY" #CURRENTCONFIG#\widget][!SetOption MeasureShow String "(#CURRENTCONFIGX# + (#CURRENTCONFIGWIDTH# + #var.BlockWidth#) / 2)" #CURRENTCONFIG#\widget][!UpdateMeasure "MeasureShow" #CURRENTCONFIG#\widget][!Redraw #CURRENTCONFIG#\widget][!Show #CURRENTCONFIG#\widget]
MouseLeaveAction=[!Hide #CURRENTCONFIG#\widget][!Redraw]