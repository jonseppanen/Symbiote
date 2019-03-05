[MeasureNetworkStart]
UpdateDivider=-1
Measure=calc
DynamicVariables=1
OnUpdateAction=[!SetVariable WifiOrEthernet "wifi"][!SetVariable WifiOrEthernet "wifi" #CURRENTCONFIG#\widget widget.ini][!SetVariable vSignalQuality "0"]

[MeasureInternet]
Measure=Plugin
Plugin=SysInfo
SysInfoType=INTERNET_CONNECTIVITY
DynamicVariables=1

[MeasureInternetStatus]
Measure=String
DynamicVariables=1
String=[MeasureInternet]
ifMatch = "1"
ifNotMatchAction = [!SetVariable vMeterUpColor "255,0,0,255"][!SetVariable #ifInternet# "Active" #CURRENTCONFIG#\widget widget.ini][!Update #CURRENTCONFIG#\widget]
ifMatchAction = [!SetVariable vMeterUpColor "0,0,0,0"][!SetVariable #ifInternet# "Down" #CURRENTCONFIG#\widget widget.ini][!Update #CURRENTCONFIG#\widget]

[MeasureAdapterType]
Measure=Plugin
Plugin=SysInfo
SysInfoType=ADAPTER_TYPE
SysInfoData=Best
UpdateRate=5
DynamicVariables=1
IfMatch=Wireless
IfMatchAction=[!SetVariable WifiOrEthernet "wifi"][!SetVariable WifiOrEthernet "wifi" #CURRENTCONFIG#\widget widget.ini]
IfNotMatchAction=[!SetVariable WifiOrEthernet "ethernet"][!SetVariable WifiOrEthernet "ethernet" #CURRENTCONFIG#\widget widget.ini]
IfMatchMode=1

[MeasureQuality]
Measure=Plugin
Plugin=WiFiStatus
Group=WIFI
WiFiInfoType=Quality
WiFiIntfID=0

[MeasureQualityRange]
Group=WIFI
Measure=Calc
Formula=MeasureQuality < 25 ? 1 : (MeasureQuality < 50 ? 2 : (MeasureQuality < 75 ? 3 : 4))
OnUpdateAction=[!SetVariable vSignalQuality [MeasureQualityRange]][!SetVariable vSignalQuality [MeasureQualityRange] #CURRENTCONFIG#\widget widget.ini]