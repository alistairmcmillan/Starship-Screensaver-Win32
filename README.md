# StarshipScreensaverWin32

![Screenshot](/Screenshot.png?raw=true "Screenshot")

Old C++ Win32 OpenGL screensaver. Started playing with this code in 2007 and last touched it in 2009. Cleaned it up a little in 2015. 

HOWTO COMPILE
-------------

* Download and install the Windows 7 SDK http://www.microsoft.com/en-us/download/details.aspx?id=3138. You can install the full thing or just the **Windows Headers and Libraries** and **Visual C++ Compilers** options.
* Add `C:\Program Files (x86)\Microsoft Visual Studio 9.0\VC\bin` to the system path
* Open a Command Prompt and run `vcvars32.bat` to set environment variables.
* Within the same Command Prompt navigate to the folder with the screensaver files.
* Run `nmake`.
