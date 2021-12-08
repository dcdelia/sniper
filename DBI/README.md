## SNIPER - DBI Variant

### Compilation

The DBI variant of SNIPER builds on [Intel Pin](https://software.intel.com/en-us/articles/pin-a-dynamic-binary-instrumentation-tool) and requires Visual Studio 2015 or higher for its compilation (default for the project: VS2017). We extensively tested it on Windows 7 SP1 and Windows 10 build 1803.

We recommend using Pin version 3.19, as Windows 7 is no longer supported starting with the 3.20 release. Pin has some include dependencies: we provide a `Locals.props` property file to ease project configuration. Its defaults are Pin being installed in `C:\Pin319` and the SDK 10.0.17763.0 headers being in use: 

```
  <PropertyGroup Label="UserMacros">
    <PinFolder>C:\Pin319</PinFolder>
    <WinHPath>C:/Program Files (x86)/Windows Kits/10/Include/10.0.17763.0/um</WinHPath>
  </PropertyGroup>
```

For instance, if you wish to use the SDK 8.1 headers, update the Project settings in Visual Studio and then change the value of the `WinHPath` property to `C:/Program Files (x86)/Windows Kits/8.1/Include/um`. Similary, edit this property value if are running on a 32-bit install of Windows since your headers will be in `C:/Program Files/`. The purpose of this step is to enable Pin to include the absolute path of `Windows.h` from its CRT headers.

You should now be able to compile SNIPER. Eventually, you will find a `sniper32.dll` (or `sniper64.dll` if you are building the 64-bit tracer) library in the Pin directory. If you encounter a missing `msvc_compat.h` error, make sure that `$(PinFolder)\extras\crt\include` is a valid path.

### Quick start

The folder `C:\Pin319\sniper` will contain log files (one per thread) for the API calls from program code. Log file names in the output folder will contain the PID, a progressive internal thread number, and the TID of each traced execution unit. More details and configuration options, such as some that we used for collecting several statistics in the paper, can be found in `logger.h`.

To run an executable under SNIPER use:

```
C:\Pin319\pin.exe -t sniper32.dll [options] -- <file.exe>
```

Currently available options are those from the library of [DBI mitigations](https://github.com/season-lab/sok-dbi-security/) that we build on (*available in the 32-bit build only*). You can enable the tracing of derived execution flows (child processes and remote threads) by adding the `-follow_execv` directive for Pin before the `-t sniper32.dll` part.

*TODO: provide instructions on how to generate and add prototypes for more DLL modules*