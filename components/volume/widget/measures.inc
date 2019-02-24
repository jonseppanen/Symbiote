[MeasureSysVolume]
Measure=Plugin
Plugin=Win7AudioPlugin
AverageSize=5

[MeasureVolLevel]
Measure=Calc
Formula=MeasureSysVolume < 25 ? 1 : (MeasureSysVolume < 50 ? 2 : (MeasureSysVolume < 75 ? 3 : 4))
AverageSize=5