// Pseudocode for function at 0x10000A250
const char *__fastcall sub_10000A250(const char *result, __int64 a2)
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
  __int64 v12; // x2
  __int128 v13; // q1
  __int128 v14[2]; // [xsp+0h] [xbp-40h] BYREF

  if ( (*(_DWORD *)result & 0x80000000) == 0
    && (v3 = result, v4 = *((_DWORD *)result + 1), v4 - 561 >= 0xFFFFFDFF)
    && (v5 = *((_DWORD *)result + 9), v5 <= 0x200)
    && ((v6 = (v5 + 3) & 0xFFFFFFFC, v4 - 48 >= v5) ? (v7 = v4 == v6 + 48) : (v7 = 0),
        v7 && (v4 >= 0x228 ? (v8 = 552LL) : (v8 = v4), (result = (const char *)memchr(result + 40, 0, v8 - 40)) != 0LL)) )
  {
    v9 = &v3[((_WORD)v4 + 3) & 0x7FC];
    if ( !*(_DWORD *)v9 && *((_DWORD *)v9 + 1) > 0x1Fu )
    {
      v11 = *(unsigned int *)&v3[v6 + 40];
      v12 = *(unsigned int *)&v3[v6 + 44];
      v13 = *(_OWORD *)(v9 + 36);
      v14[0] = *(_OWORD *)(v9 + 20);
      v14[1] = v13;
      result = (const char *)sub_1000015A8(v3 + 40, v11, v12, v14);
      *(_DWORD *)(a2 + 32) = 0;
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
