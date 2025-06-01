// Pseudocode for function at 0x100007F8C
void __fastcall sub_100007F8C(__int64 a1)
{
  __int64 v2; // x8
  __int64 v3; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  v2 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(v2 + 68) &= ~0x10000000u;
  dispatch_resume(*(dispatch_object_t *)(v2 + 72));
  v3 = *(_QWORD *)(a1 + 32);
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  sub_100007190(v3);
}
