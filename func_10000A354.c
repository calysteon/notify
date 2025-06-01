// Pseudocode for function at 0x10000A354
const char *__fastcall sub_10000A354(const char *result, __int64 a2)
{
  const char *v3; // x20
  unsigned int v4; // w21
  unsigned int v5; // w8
  unsigned int v6; // w22
  bool v7; // zf
  __int64 v8; // x8
  const char *v9; // x8
  int v10; // w8
  __int64 v11; // x1
  __int128 v12; // q1
  __int128 v13[2]; // [xsp+0h] [xbp-40h] BYREF

  if ( (*(_DWORD *)result & 0x80000000) == 0
    && (v3 = result, v4 = *((_DWORD *)result + 1), v4 - 557 >= 0xFFFFFDFF)
    && (v5 = *((_DWORD *)result + 9), v5 <= 0x200)
    && ((v6 = (v5 + 3) & 0xFFFFFFFC, v4 - 44 >= v5) ? (v7 = v4 == v6 + 44) : (v7 = 0),
        v7 && (v4 >= 0x228 ? (v8 = 552LL) : (v8 = v4), (result = (const char *)memchr(result + 40, 0, v8 - 40)) != 0LL)) )
  {
    v9 = &v3[((_WORD)v4 + 3) & 0x7FC];
    if ( !*(_DWORD *)v9 && *((_DWORD *)v9 + 1) > 0x1Fu )
    {
      v11 = *(unsigned int *)&v3[v6 + 40];
      v12 = *(_OWORD *)(v9 + 36);
      v13[0] = *(_OWORD *)(v9 + 20);
      v13[1] = v12;
      result = (const char *)sub_100001334(
                               v3 + 40,
                               v11,
                               (_DWORD *)(a2 + 36),
                               (_DWORD *)(a2 + 40),
                               (_QWORD *)(a2 + 44),
                               (_DWORD *)(a2 + 52),
                               v13);
      *(_DWORD *)(a2 + 32) = 0;
      *(NDR_record_t *)(a2 + 24) = NDR_record;
      *(_DWORD *)(a2 + 4) = 56;
      return result;
    }
    v10 = -309;
  }
  else
  {
    v10 = -304;
  }
  *(_DWORD *)(a2 + 32) = v10;
  *(NDR_record_t *)(a2 + 24) = NDR_record;
  return result;
}
