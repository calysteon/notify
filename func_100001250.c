// Pseudocode for function at 0x100001250
void __fastcall sub_100001250(unsigned int *a1)
{
  unsigned int v2; // w8
  __int64 _38; // [xsp+38h] [xbp+8h]

  v2 = a1[3];
  if ( (v2 & 4) != 0 )
  {
    if ( *(_QWORD *)a1 )
    {
      qword_100014010 = (__int64)"BUG IN LIBNOTIFY: port_proc still had clients";
      __break(1u);
    }
    else
    {
      sub_100004BF4(7LL, "do_mach_notify_dead_name freed port %x\n", a1);
      if ( ((_38 ^ (2 * _38)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      sub_100000A10(a1);
    }
  }
  else
  {
    a1[3] = v2 | 4;
  }
}
