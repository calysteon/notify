// Pseudocode for function at 0x1000063A4
void __fastcall sub_1000063A4(__int64 a1, __int64 a2, __int64 a3)
{
  mach_msg_header_t *msg; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  if ( a2 == 2 && (dispatch_mach_mig_demux(a1, &off_100014000, 1LL, a3) & 1) == 0 )
  {
    msg = (mach_msg_header_t *)dispatch_mach_msg_get_msg(a3, 0LL);
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    mach_msg_destroy(msg);
  }
}
