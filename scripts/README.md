### Database of API prototypes

We borrowed `populate_db.py` and adapted `parse_db.py` from the scripts that Xabi-Ugarte Pedrero wrote for the [PyREBox](https://github.com/Cisco-Talos/pyrebox/) project, making them correctly distinguish `INOUT` from `OUT` arguments and generate C files with prototype information that we can embed in our tracers during compilation for fast retrieval.

We use the generated C files as-is in the DBI variant and with small adaptations in the VT-based one. The scripts need a database built with Deviare2 and with modifier information retrieved from MSDN. For simplicity, you may borrow the [SQLite files](https://github.com/Cisco-Talos/pyrebox/tree/master/mw_monitor2/third_party/deviare2_db) that the PyREBox authors released publicly for 32 and 64-bit Windows.
