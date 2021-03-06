# SNIPER

This is the future home of the SNIPER system, a robust API monitor for Windows binaries.

SNIPER is presented in the research paper *Designing Robust API Monitoring Solutions*, which has been submitted to the IEEE for possible publication. An early version of the paper is available as technical report at [https://arxiv.org/abs/2005.00323](https://arxiv.org/abs/2005.00323).

During the review stage we are releasing partial yet fully functional snapshots of the code for its two variants.

As you may read in the paper, one implementation of SNIPER builds on DBI (dynamic binary instrumentation) using Intel Pin and can serve as a standalone tool for in-guest monitoring of programs/malware or be included to your favorite DBI-based analysis system (a self-plug: [BluePill](https://github.com/season-lab/bluepill)). The other builds on CPU virtualization extensions (Intel VT-x) for better transparency and ships as a plugin for the DRAKVUF analysis system based on Xen.