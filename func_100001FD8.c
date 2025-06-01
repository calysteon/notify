// Pseudocode for function at 0x100001FD8
__int64 __fastcall sub_100001FD8(__int64 result, const char *a2, int a3, __int64 a4, __int128 *a5)
{
  __int64 v8; // x22
  __int128 v9; // q1
  __int64 v10; // x8
  __int64 v11; // x0
  __int128 v12; // q1
  __int128 v13; // [xsp+20h] [xbp-50h] BYREF
  __int128 v14; // [xsp+30h] [xbp-40h]
  unsigned int v15; // [xsp+44h] [xbp-2Ch] BYREF
  gid_t v16; // [xsp+48h] [xbp-28h] BYREF
  uid_t v17; // [xsp+4Ch] [xbp-24h] BYREF

  v8 = result;
  v16 = -1;
  v17 = -1;
  v15 = -1;
  if ( (a2 || !a3) && (!a2 || a3 && !a2[a3 - 1]) )
  {
    v9 = a5[1];
    v13 = *a5;
    v14 = v9;
    sub_100000AB0(&v13, 0xFFFFFFFFLL, &v17, &v16, &v15, 0LL);
    ++qword_100014160;
    sub_100004BF4(7LL, "__notify_server_monitor_file %d %d %s 0x%08x\n", v15, v8, a2, a4);
    result = os_set_64_ptr_find(&unk_1000141D0, (unsigned int)v8 | ((unsigned __int64)v15 << 32));
    if ( result )
    {
      if ( result != qword_1000141E8 )
      {
        v10 = *(_QWORD *)(result - qword_1000141E8 + 48);
        if ( !v10 )
          __assert_rtn("__notify_server_monitor_file_2", "notify_proc.c", 1422, "n != NULL");
        v11 = *(_QWORD *)(v10 + 8);
        v12 = a5[1];
        v13 = *a5;
        v14 = v12;
        return sub_1000085C8(v11);
      }
    }
  }
  return result;
}
