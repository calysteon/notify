// Pseudocode for function at 0x100006B04
__int64 __fastcall sub_100006B04(unsigned int *a1)
{
  __int64 v2; // x19
  __int64 v3; // x8
  _QWORD *v4; // x9
  int v5; // w8
  __int64 v6; // x0
  __int64 _28; // [xsp+28h] [xbp+8h]

  v2 = *((_QWORD *)a1 + 6);
  v3 = *(_QWORD *)a1;
  v4 = (_QWORD *)*((_QWORD *)a1 + 1);
  if ( *(_QWORD *)a1 )
    *(_QWORD *)(v3 + 8) = v4;
  *v4 = v3;
  sub_1000006AC((__int64)&unk_1000141D0, *((_QWORD *)a1 + 8), (__int64)(a1 + 16));
  v5 = *((_BYTE *)a1 + 79) & 0xF;
  if ( v5 == 3 )
  {
    mach_port_deallocate(mach_task_self_, a1[14]);
  }
  else if ( v5 == 4 )
  {
    v6 = a1[14];
    if ( (v6 & 0x80000000) == 0 )
      close_NOCANCEL(v6);
  }
  free(a1);
  ++dword_100014274;
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return sub_100006BC0(v2);
}
