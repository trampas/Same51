# This is an Embedded Test Project for VScode

To build code first, Install node.js
https://nodejs.org/en/

To use J-Link debugger install the J-Links Software and Documentation Pack
https://www.segger.com/downloads/jlink#J-LinkSoftwareAndDocumentationPack

Once these two items are install in VSCode click **Terminal->Run Task->install tools** then click **Terminal->Run Task->install extensions**

If you already have node.js, xpm, and VSCode extensions install you an install the project dependencies at command terminal by typing **xpm install**


# Development Details
The package.json contains the list of dependencies, ie tools (compiler, make, etc) and libraries needed to build the code.  **xpm install** will install them
.vscode directory contains settings for the vscode editor and task commands. 
xpacks/ directory contains the project specific tools (gcc, cmake, libraries, etc)

