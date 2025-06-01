// Pseudocode for function at 0x100007E34
__int64 __fastcall sub_100007E34(const char *a1, int a2, uid_t a3, gid_t a4)
{
  int v8; // w25
  __int64 v9; // x0
  __int64 v10; // x20
  passwd *v11; // x0
  int v12; // w0
  int v13; // w0
  int v14; // w19
  stat v16; // [xsp+20h] [xbp-120h] BYREF
  gid_t v17[4]; // [xsp+B0h] [xbp-90h] BYREF
  __int128 v18; // [xsp+C0h] [xbp-80h]
  __int128 v19; // [xsp+D0h] [xbp-70h]
  __int128 v20; // [xsp+E0h] [xbp-60h]

  memset(&v16, 0, sizeof(v16));
  v8 = gL1CacheEnabled;
  gL1CacheEnabled = 0;
  *(_OWORD *)v17 = 0u;
  v18 = 0u;
  v19 = 0u;
  v20 = 0u;
  v9 = getgroups(16, v17);
  if ( (v9 & 0x80000000) != 0 )
    return 1LL;
  v10 = v9;
  v11 = getpwuid(a3);
  if ( !v11 )
  {
    gL1CacheEnabled = v8;
    return 1LL;
  }
  v12 = initgroups(v11->pw_name, a4);
  gL1CacheEnabled = v8;
  if ( (v12 & 0x80000000) != 0 )
    return 1LL;
  pthread_setugid_np(a3, a4);
  v13 = a2 ? lstat(a1, &v16) : stat(a1, &v16);
  v14 = v13;
  pthread_setugid_np(0xFFFFFF9B, 0xFFFFFF9B);
  if ( (syscall(243, v10, v17, 0LL) & 0x80000000) != 0 )
    return 1LL;
  if ( !v14 )
    return 0LL;
  if ( *__error() == 13 )
    return 2LL;
  return 1LL;
}
