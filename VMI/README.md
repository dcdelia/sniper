## SNIPER - VMI Variant

The VMI variant of SNIPER builds on [DRAKVUF](https://github.com/tklengyel/drakvuf). If you have no prior experience with the system, we recommend you to look up its [wiki](https://github.com/tklengyel/drakvuf/wiki) and [install guide](https://drakvuf.com/) to arrange a working Windows 7 SP1 install before trying to use SNIPER on it.

Our code comprises of a plugin `persmon` to implement VMI-based API monitoring with invisible breakpoints and of prototype parsing scripts to merge DLL JSON profiles with the CPP output from the modified PyREBox extraction scripts (`../scripts`).

To set up `persmon`, you will need to fetch the `376c03d` commit of DRAKVUF, apply the patch that we provide here, copy the contents of the present `src` folder into the main tree of DRAKVUF, and compile DRAKVUF.

We added several comments to explain which parts of DRAKVUF we modified, what is the role of key parts that we used but left untouched, and the meaning of the new command-line options that we added (you can refer to `main.cpp`).