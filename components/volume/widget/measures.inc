[MeasureSysVolume]
Measure=Plugin
Plugin=Win7AudioPlugin
AverageSize=5

[MeasureVolLevel]
Measure=Calc
Formula=MeasureSysVolume < 25 ? 1 : (MeasureSysVolume < 50 ? 2 : (MeasureSysVolume < 75 ? 3 : 4))
AverageSize=5

[MeasureAudio]
Measure=Plugin
Plugin=AudioLevel
Port=Output
FFTSize=1024
FFTAttack=15
FFTDecay=250
Bands=10

[MeasureBand0]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=0

[MeasureBand1]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=1

[MeasureBand2]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=2

[MeasureBand3]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=3

[MeasureBand4]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=4

[MeasureBand5]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=5

[MeasureBand6]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=6

[MeasureBand7]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=7

[MeasureBand8]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=8

[MeasureBand9]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=9