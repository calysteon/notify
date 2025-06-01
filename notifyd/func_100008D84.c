// Pseudocode for function at 0x100008D84
__int64 __fastcall sub_100008D84(__int64 result, __int64 a2)
{
  int v3; // w8
  __int64 v4; // x1
  __int64 v5; // x8
  int v6; // w2
  __int128 v7; // q1
  __int128 v8[2]; // [xsp+0h] [xbp-30h] BYREF

  if ( (*(_DWORD *)result & 0x80000000) != 0 || *(_DWORD *)(result + 4) != 52 )
  {
    v3 = -304;
  }
  else
  {
    if ( !*(_DWORD *)(result + 52) && *(_DWORD *)(result + 56) > 0x1Fu )
    {
      v5 = *(_QWORD *)(result + 32);
      v4 = *(_QWORD *)(result + 40);
      v6 = *(_DWORD *)(result + 48);
      v7 = *(_OWORD *)(result + 88);
      v8[0] = *(_OWORD *)(result + 72);
      v8[1] = v7;
      result = sub_100001E20(v5, v4, v6, v8, 1);
      *(_DWORD *)(a2 + 32) = 0;
      return result;
    }
    v3 = -309;
  }
  *(_DWORD *)(a2 + 32) = v3;
  *(NDR_record_t *)(a2 + 24) = NDR_record;
  return result;
}
