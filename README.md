# SNIPER

SNIPER is an accurate, robust, and transparent tracing solution for Windows APIs.

The architecture behind it and two implementation variants are described in the research paper *Designing Robust API Monitoring Solutions*, which has just been accepted for publication in the IEEE Transactions on Dependable and Secure Computing. You can find a preprint of the work [here](http://www.diag.uniroma1.it//~delia/).

As you may read in there, one implementation variant builds on DBI (dynamic binary instrumentation) with Intel Pin. It can serve as a standalone tool for in-guest monitoring of legitimate programs or malware, as well as be included in your favorite DBI-based analysis system (e.g., [BluePill](https://github.com/season-lab/bluepill)). The other variant builds on CPU virtualization extensions (Intel VT-x) for better transparency and ships as an extension of the [DRAKVUF](https://drakvuf.com/) analysis system, benefiting from its invisible breakpoints implemented on top of the Xen hypervisor via split EPT (extended page table) views.

While the paper is in press, we release incremental fully functional snapshots of the code of both variants as we keep polishing it.

