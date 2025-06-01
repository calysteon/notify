// Pseudocode for function at 0x100009FE8
__int64 __fastcall sub_100009FE8(__int64 result, __int64 a2)
{
  int v3; // w8
  __int64 v4; // x20
  unsigned int v5; // w21
  unsigned int v6; // w9
  unsigned int v7; // w22
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x1
  __int64 v11; // x2
  __int128 v12; // q1
  __int128 v13[2]; // [xsp+0h] [xbp-40h] BYREF

  if ( (*(_DWORD *)result & 0x80000000) == 0 )
    goto LABEL_2;
  v4 = result;
  v3 = -304;
  if ( *(_DWORD *)(result + 24) != 1 )
    goto LABEL_3;
  v5 = *(_DWORD *)(result + 4);
  if ( v5 - 573 < 0xFFFFFDFF )
    goto LABEL_3;
  if ( *(unsigned __int16 *)(result + 38) << 16 != 1114112 )
  {
    v3 = -300;
    goto LABEL_3;
  }
  v6 = *(_DWORD *)(result + 52);
  if ( v6 > 0x200 )
    goto LABEL_2;
  v3 = -304;
  if ( v5 - 60 < v6 )
    goto LABEL_3;
  v7 = (v6 + 3) & 0xFFFFFFFC;
  if ( v5 != v7 + 60 )
    goto LABEL_3;
  v8 = v5 >= 0x238 ? 568LL : v5;
  result = (__int64)memchr((const void *)(result + 56), 0, v8 - 56);
  if ( result )
  {
    v9 = (((_WORD)v5 + 3) & 0x7FC) + v4;
    if ( !*(_DWORD *)v9 && *(_DWORD *)(v9 + 4) > 0x1Fu )
    {
      v10 = *(unsigned int *)(v4 + v7 + 56);
      v11 = *(unsigned int *)(v4 + 28);
      v12 = *(_OWORD *)(v9 + 36);
      v13[0] = *(_OWORD *)(v9 + 20);
      v13[1] = v12;
      result = sub_1000018A8(v4 + 56, v10, v11, v13);
      *(_DWORD *)(a2 + 32) = 0;
      return result;
    }
    v3 = -309;
  }
  else
  {
LABEL_2:
    v3 = -304;
  }
LABEL_3:
  *(_DWORD *)(a2 + 32) = v3;
  *(NDR_record_t *)(a2 + 24) = NDR_record;
  return result;
}
