// Pseudocode for function at 0x100009A74
__int64 __fastcall sub_100009A74(__int64 result, __int64 a2)
{
  int v3; // w8
  unsigned int v4; // w8
  __int64 v5; // x1
  int v6; // w4
  __int128 v7; // q1
  __int128 v8[2]; // [xsp+0h] [xbp-30h] BYREF

  if ( (*(_DWORD *)result & 0x80000000) != 0 || *(_DWORD *)(result + 4) != 48 )
  {
    v3 = -304;
  }
  else
  {
    if ( !*(_DWORD *)(result + 48) && *(_DWORD *)(result + 52) > 0x1Fu )
    {
      v4 = *(_DWORD *)(result + 32);
      v5 = *(_QWORD *)(result + 36);
      v6 = *(_DWORD *)(result + 44);
      v7 = *(_OWORD *)(result + 84);
      v8[0] = *(_OWORD *)(result + 68);
      v8[1] = v7;
      result = sub_100001BDC(v4, v5, (_QWORD *)(a2 + 36), (int *)(a2 + 44), v6, v8, 0);
      *(_DWORD *)(a2 + 32) = 0;
      *(NDR_record_t *)(a2 + 24) = NDR_record;
      *(_DWORD *)(a2 + 4) = 48;
      return result;
    }
    v3 = -309;
  }
  *(_DWORD *)(a2 + 32) = v3;
  *(NDR_record_t *)(a2 + 24) = NDR_record;
  return result;
}
