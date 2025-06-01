// Pseudocode for function at 0x1000064E8
__int64 __fastcall sub_1000064E8(const char *a1, __int64 a2, int a3, int a4)
{
  size_t v8; // x0
  __int64 *v9; // x25
  __int64 v10; // x26
  size_t v11; // x23
  __int64 v12; // x27
  const char *v13; // x24
  size_t v14; // x0
  __int64 result; // x0
  size_t v16; // x20
  int v17; // w8
  int v18; // w8
  int v20; // w8
  bool v22; // zf
  int v23; // w8
  char __str[64]; // [xsp+18h] [xbp-98h] BYREF

  if ( !a1 )
    return 10LL;
  if ( !(_DWORD)a2 )
    return 0LL;
  if ( strncmp(a1, "user.uid.", 9uLL) )
  {
    v8 = strlen(a1);
    v9 = (__int64 *)qword_100014248;
    if ( qword_100014248 )
    {
      v10 = (unsigned int)dword_10001425C;
      if ( dword_10001425C )
      {
        v11 = v8;
        do
        {
          v12 = *v9;
          if ( !*v9 )
            break;
          v13 = *(const char **)(v12 + 8);
          if ( v13 )
          {
            v14 = strlen(*(const char **)(v12 + 8));
            if ( v14 <= v11 && !strncmp(v13, a1, v14) )
            {
              v20 = *(_DWORD *)(v12 + 48);
              if ( *(_DWORD *)(v12 + 40) != (_DWORD)a2 || (v20 & a4) == 0 )
              {
                v22 = *(_DWORD *)(v12 + 44) != a3 || (v20 & (16 * a4)) == 0;
                v23 = v20 & (a4 << 8);
                if ( v22 && v23 == 0 )
                  return 7LL;
              }
              return 0LL;
            }
          }
          ++v9;
          --v10;
        }
        while ( v10 );
      }
    }
    else
    {
      dword_10001425C = 0;
    }
    return 0LL;
  }
  snprintf(__str, 0x3FuLL, "%s%d", "user.uid.", a2);
  v16 = strlen(__str);
  v17 = strncmp(a1, __str, v16);
  result = 7LL;
  if ( !v17 )
  {
    v18 = (unsigned __int8)a1[v16];
    if ( v18 == 46 || v18 == 0 )
      return 0LL;
    else
      return 7LL;
  }
  return result;
}
