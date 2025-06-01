// Pseudocode for function at 0x10000971C
__int64 __fastcall sub_10000971C(__int64 result, __int64 a2)
{
  int v3; // t1
  int v4; // w8
  __int128 v5; // q1
  __int128 v6[2]; // [xsp+0h] [xbp-30h] BYREF

  if ( (*(_DWORD *)result & 0x80000000) != 0 || *(_DWORD *)(result + 4) != 24 )
  {
    v4 = -304;
  }
  else
  {
    v3 = *(_DWORD *)(result + 24);
    result += 24LL;
    if ( !v3 && *(_DWORD *)(result + 4) > 0x1Fu )
    {
      v5 = *(_OWORD *)(result + 36);
      v6[0] = *(_OWORD *)(result + 20);
      v6[1] = v5;
      result = sub_1000025E0((_DWORD *)(a2 + 36), (_DWORD *)(a2 + 40), (_DWORD *)(a2 + 44), v6);
      *(_DWORD *)(a2 + 32) = 0;
      *(NDR_record_t *)(a2 + 24) = NDR_record;
      *(_DWORD *)(a2 + 4) = 48;
      return result;
    }
    v4 = -309;
  }
  *(_DWORD *)(a2 + 32) = v4;
  *(NDR_record_t *)(a2 + 24) = NDR_record;
  return result;
}
