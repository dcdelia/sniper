# SNIPER

SNIPER is an accurate, robust, and transparent tracing solution for Windows APIs.

Its design and features are described in the research paper *Designing Robust API Monitoring Solutions*, which has just been accepted for publication in the IEEE Transactions on Dependable and Secure Computing. You can find a preprint of the work [here](http://www.diag.uniroma1.it//~delia/).

SNIPER comes in two implementation variants. One builds on DBI (dynamic binary instrumentation) and uses Intel Pin: it operates as a standalone tool for in-guest monitoring of both legitimate software and malware, but can also be included in your favorite DBI-based analysis system (e.g., [BluePill](https://github.com/season-lab/bluepill)). The other builds on CPU virtualization extensions (Intel VT-x) for superior transparency and ships as an extension of the [DRAKVUF](https://drakvuf.com/) analysis system, relying on its invisible breakpoints for out-of-guest instrumentation.

For the time in which the paper is still in press, we are releasing fully functional snapshots of the code as we keep polishing it.

### Credits
- Daniele Cono D'Elia (main developer)
- Simone Nicchi (argument tracing)
- Matteo Mariani (DRAKVUF integration)
- Giuseppe Fontana (64-bit porting)
- Federico Palmaro (malware testing)