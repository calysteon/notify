// Pseudocode for function at 0x100008858
void __fastcall sub_100008858(__int64 a1)
{
  __int64 v1; // x0
  __int64 v2; // x0
  __int64 v3; // x8
  __int64 v4; // x8
  __int64 _8; // [xsp+8h] [xbp+8h]

  v1 = os_set_64_ptr_find(&unk_1000141D0, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 96LL));
  if ( v1 )
  {
    v2 = v1 - qword_1000141E8;
    if ( v2 )
    {
      if ( (*(_BYTE *)(v2 + 79) & 0xF) == 1 )
      {
        v3 = *(_QWORD *)(v2 + 48);
        if ( v3 )
        {
          v4 = *(unsigned int *)(v3 + 52);
          if ( (_DWORD)v4 != -1 )
            ++*(_DWORD *)(qword_1000142E0 + 4 * v4);
        }
      }
      if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      sub_100006694(v2, 0LL, 0LL);
    }
  }
}
