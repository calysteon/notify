// Pseudocode for function at 0x100008B8C
void __fastcall sub_100008B8C(_DWORD *a1, __int64 a2)
{
  __int64 v3; // x0
  __int64 v4; // x20
  __int64 i; // x21

  if ( (*a1 & 0x80000000) != 0 || a1[1] != 36 )
  {
    *(_DWORD *)(a2 + 32) = -304;
    *(NDR_record_t *)(a2 + 24) = NDR_record;
  }
  else
  {
    sub_10000083C(a1[8]);
    v3 = os_set_32_ptr_find(&unk_1000141F0);
    if ( v3 )
      v4 = v3 - qword_100014208;
    else
      v4 = 0LL;
    *(_DWORD *)(v4 + 12) &= ~1u;
    for ( i = *(_QWORD *)v4; i; i = *(_QWORD *)(i + 32) )
    {
      sub_100006CEC(i, 0LL, v4);
      if ( (*(_BYTE *)(v4 + 12) & 1) != 0 )
        break;
    }
    *(_DWORD *)(a2 + 32) = 0;
  }
}
