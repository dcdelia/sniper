### Compilation

This variant of SNIPER builds on [Intel Pin](https://software.intel.com/en-us/articles/pin-a-dynamic-binary-instrumentation-tool) (v3.15 recommended) and requires Visual Studio 2015 or higher for its compilation.

Pin has some dependencies that require manual inclusion in the project. We created a `Locals.props` file that simplifies the project configuration. Its defaults are Pin being installed in `C:\Pin315` and the SDK 8.1 headers being in use: 

```
  <PropertyGroup Label="UserMacros">
    <PinFolder>C:\Pin311</PinFolder>
    <WinHPath>C:/Program Files (x86)/Windows Kits/8.1/Include/um</WinHPath>
  </PropertyGroup>
```

For instance, if you wish to use the SDK 10.0.17763.0 headers, after modifying the Project settings in Visual Studio
you should also change the value of the `WinHPath` property to `C:/Program Files/Windows Kits/10/Include/10.0.17763.0/um`. Similary, modify the property value if your SDK 8.1 headers are installed in `C:/Program Files/` instead of `C:/Program Files (x86)/`. The purpose of this field is to assist Pin when it includes the absolute path of `Windows.h` from its CRT headers.

You should now be able to compile SNIPER. Once compilation ends, you will find a `sniper32.dll` library in the Pin directory. If you encounter a missing `msvc_compat.h` error, make sure that `$(PinFolder)\extras\crt\include` is a valid path.

### Quick start

Make sure that folder `C:\Pin315\sniper` exists, as it will contain the log files (one per thread) for the API calls from program code.

To run an executable under SNIPER use:

```
C:\Pin315\pin.exe -t sniper32.dll [options] -- <file.exe>
```

Presently available options are those from the library of DBI mitigations that we build on.

While we hope to publish a rich documentation for SNIPER before publication, you can learn about the mitigations by visiting their [project page](https://github.com/season-lab/sok-dbi-security/) and reading our ASIACCS'19 paper *"SoK: Using Dynamic Binary Instrumentation for Security (And How You May Get Caught Red Handed)"*.

Note that we use a buffering mechanism to speed up logging efficiency. The logs presently contain also debugging information and statistics (`scztoon.txt`) that we used for validation and for the evaluation of the paper. More details and related configuration options can be found in `logger.h`.