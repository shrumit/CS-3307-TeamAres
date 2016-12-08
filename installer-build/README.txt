How to make the installer
-----------------------------

Compile the project source from Qt creator as a release build. MinGW 5.3.0 32bit is recommended for deployment to 32bit windows 7.

Navigate to the build directory (folder name something similar build-TeamAres-Desktop_Qt_5_7_0_MinGW_32bit-Release).

Inside the release or debug folder (depending on if you did release or debug build). 
You will find TeamAres.exe + a bunch of other files (.o files, .cpp, and other files from MOC or the compilation process) in this folder.
Delete all files EXCEPT for TeamAres.exe, this should be the only file left.

From start menu open your Qt terminal for the compiler used. 
Eg, if you used MSVC 2015 32bit, you will open "Qt 5.7 32-bit for Desktop (MSVC 2015)"
If you used MinGW 5.3.0 32bit, you will select from the start menu "Qt 5.7 for Desktop (MinGW 5.3.0 32bit)"
Make sure you do not build with 64bit and use the 32bit terminal or vice versa. This will break things.
These entries should be under Qt in the start menu.

Once you've opened the correct terminal for the compiler/profile used to build the project, cd into the folder from before that contains TeamAres.exe
Then run the command:


windeployqt.exe .



Note: the dot at the end is needed.

Now after running the commaned the folder containing TeamAres.exe has a bunch of other files and folders (eg .dll files)
Copy everything in this folder, including TeamAres.exe itself

Now, in the folder were you found this README there is a folder called "packages". Inside this folder is a folder called "org.qtproject.team.ares".
Inside "org.qtproject.team.ares" there is a folder called "data". This folder should be empty.
The "data" folder is where we will be pasting everything we just copied (TeamAres.exe, the .dlls and subfolders ect.)

Once all the above steps are complete we now build the installer
-------------------------------------

Make sure Qt Installer framework is installed and that it is properly added to your PATH: https://doc.qt.io/qtinstallerframework/

Generate installer by running this command from cmd while cmd is in the same working directory as this README file:

binarycreator --offline-only -c config/config.xml -p packages team-ares-installer


If the above command does not work because binarycreator is not in PATH (binarycreator not found) use the directory 
were you install the installer framework instead, like in the command below:

C:\Qt\Tools\QtInstallerFramework\2.0\bin\binarycreator.exe --offline-only -c config/config.xml -p packages team-ares-installer


Now you will have team-ares-installer.exe in this directory, read for deployment.