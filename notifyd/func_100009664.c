// Pseudocode for function at 0x100009664
__int64 __fastcall sub_100009664(__int64 result, __int64 a2)
{
  __int64 v3; // x8
  int v4; // w8
  __int64 v5; // x0
  __int128 v6; // q1
  __int128 v7[2]; // [xsp+0h] [xbp-30h] BYREF

  if ( (*(_DWORD *)result & 0x80000000) != 0 && *(_DWORD *)(result + 24) == 1 && *(_DWORD *)(result + 4) == 40 )
  {
    if ( *(unsigned __int16 *)(result + 38) << 16 == 1114112 )
    {
      v3 = result + 40;
      if ( *(_DWORD *)(result + 40) || *(_DWORD *)(result + 44) < 0x20u )
      {
        v4 = -309;
      }
      else
      {
        v5 = *(unsigned int *)(result + 28);
        v6 = *(_OWORD *)(v3 + 36);
        v7[0] = *(_OWORD *)(v3 + 20);
        v7[1] = v6;
        result = sub_10000268C(v5, v7);
        v4 = 0;
      }
    }
    else
    {
      v4 = -300;
    }
  }
  else
  {
    v4 = -304;
  }
  *(_DWORD *)(a2 + 32) = v4;
  *(NDR_record_t *)(a2 + 24) = NDR_record;
  return result;
}
