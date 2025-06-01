// Pseudocode for function at 0x100008FE8
void __fastcall sub_100008FE8(__int64 a1, __int64 a2)
{
  unsigned int v4; // w21
  unsigned int v5; // w8
  unsigned int v6; // w22
  bool v7; // zf
  __int64 v8; // x8
  __int64 v9; // x8
  int v10; // w8
  int v11; // w1
  __int128 v12; // q1
  __int128 v13[2]; // [xsp+0h] [xbp-40h] BYREF

  if ( (*(_DWORD *)a1 & 0x80000000) == 0
    && (v4 = *(_DWORD *)(a1 + 4), v4 - 557 >= 0xFFFFFDFF)
    && (v5 = *(_DWORD *)(a1 + 36), v5 <= 0x200)
    && ((v6 = (v5 + 3) & 0xFFFFFFFC, v4 - 44 >= v5) ? (v7 = v4 == v6 + 44) : (v7 = 0),
        v7 && (v4 >= 0x228 ? (v8 = 552LL) : (v8 = v4), memchr((const void *)(a1 + 40), 0, v8 - 40))) )
  {
    v9 = (((_WORD)v4 + 3) & 0x7FC) + a1;
    if ( !*(_DWORD *)v9 && *(_DWORD *)(v9 + 4) > 0x1Fu )
    {
      v11 = *(_DWORD *)(a1 + v6 + 40);
      v12 = *(_OWORD *)(v9 + 36);
      v13[0] = *(_OWORD *)(v9 + 20);
      v13[1] = v12;
      sub_1000028A8((const char *)(a1 + 40), v11, v13);
      *(_DWORD *)(a2 + 32) = 0;
      return;
    }
    v10 = -309;
  }
  else
  {
    v10 = -304;
  }
  *(_DWORD *)(a2 + 32) = v10;
  *(NDR_record_t *)(a2 + 24) = NDR_record;
}
