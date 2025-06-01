// Pseudocode for function at 0x1000088EC
__int64 __fastcall sub_1000088EC(const char *a1, __int64 a2, __int128 *a3)
{
  __int64 result; // x0
  char *v7; // x0
  char *v8; // x22
  char *v9; // x0
  char *v10; // x23
  int v11; // w4
  __int128 v12; // q1
  __int128 v13[2]; // [xsp+0h] [xbp-50h] BYREF

  result = strncmp(a1, "com.apple.system.notify.service.", 0x20uLL);
  if ( !(_DWORD)result )
  {
    result = strncmp(a1 + 32, "path:", 5uLL);
    if ( !(_DWORD)result )
    {
      v7 = strchr(a1, 58);
      if ( v7 )
        v8 = v7 + 1;
      else
        v8 = 0LL;
      v9 = strchr(v8, 58);
      if ( v9 )
      {
        v10 = v9;
        v11 = strtol(v8, 0LL, 0);
        v8 = v10 + 1;
      }
      else
      {
        v11 = 0;
      }
      v12 = a3[1];
      v13[0] = *a3;
      v13[1] = v12;
      return sub_1000085C8((__int64)a1, a2, v8, v13, v11);
    }
  }
  return result;
}
