
function Component()
{
    
}

Component.prototype.createOperations = function()
{
    
    component.createOperations();

    if (systemInfo.productType === "windows") {
		//program launcher in start menu
        component.addOperation("CreateShortcut", "@TargetDir@/TeamAres.exe", "@StartMenuDir@/TeamAres.lnk",
            "workingDirectory=@TargetDir@", "iconPath=%SystemRoot%/system32/SHELL32.dll",
            "iconId=2");
		//uninstaller in start menu	
		component.addOperation("CreateShortcut", "@TargetDir@/maintenancetool.exe", "@StartMenuDir@/Uninstall.lnk",
            "workingDirectory=@TargetDir@", "iconPath=%SystemRoot%/system32/SHELL32.dll",
            "iconId=2");	
    }
}
