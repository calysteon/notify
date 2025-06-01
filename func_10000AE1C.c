// Pseudocode for function at 0x10000AE1C
__int64 __fastcall sub_10000AE1C(__int64 result, __int64 a2)
{
  int v3; // w8
  __int64 v4; // x20
  __int128 v5; // q1
  __int64 v6; // x8
  int v7; // w8
  __int64 v8; // x9
  int v9; // w10
  __int128 v10[2]; // [xsp+10h] [xbp-40h] BYREF
  unsigned int v11; // [xsp+3Ch] [xbp-14h] BYREF

  if ( (*(_DWORD *)result & 0x80000000) != 0 || *(_DWORD *)(result + 4) != 36 )
  {
    v3 = -304;
    goto LABEL_7;
  }
  if ( *(_DWORD *)(result + 36) || *(_DWORD *)(result + 40) <= 0x1Fu )
  {
    v3 = -309;
LABEL_7:
    *(_DWORD *)(a2 + 32) = v3;
    *(NDR_record_t *)(a2 + 24) = NDR_record;
    return result;
  }
  v4 = *(unsigned int *)(result + 32);
  v5 = *(_OWORD *)(result + 72);
  v10[0] = *(_OWORD *)(result + 56);
  v10[1] = v5;
  v11 = -1;
  sub_100000AB0(v10, 0xFFFFFFFFLL, 0LL, 0LL, &v11, 0LL);
  ++qword_1000140E8;
  sub_100004BF4((FILE *)7, "__notify_server_suspend %d %d\n", v11, v4);
  result = os_set_64_ptr_find(&unk_1000141D0, v4 | ((unsigned __int64)v11 << 32));
  if ( result && (v6 = qword_1000141E8, qword_1000141E8 != result) )
  {
    v8 = result - qword_1000141E8;
    *(_BYTE *)(result - qword_1000141E8 + 79) |= 0x20u;
    v9 = *(unsigned __int8 *)(result - v6 + 78);
    v7 = 0;
    if ( v9 != 255 )
      *(_BYTE *)(v8 + 78) = v9 + 1;
  }
  else
  {
    v7 = 50;
  }
  *(_DWORD *)(a2 + 32) = 0;
  *(_DWORD *)(a2 + 36) = v7;
  *(NDR_record_t *)(a2 + 24) = NDR_record;
  *(_DWORD *)(a2 + 4) = 40;
  return result;
}
