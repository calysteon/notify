// Pseudocode for function at 0x100000C94
__int64 __fastcall sub_100000C94(const char *a1, _QWORD *a2, _DWORD *a3, int a4, __int128 *a5)
{
  __int128 v10; // q1
  __int64 v11; // x1
  __int128 v12; // q1
  __int64 result; // x0
  __int128 v14; // q1
  int v15; // w0
  __int64 v16; // x0
  __int64 v17; // x8
  __int64 v18; // x9
  int v19; // [xsp+24h] [xbp-5Ch] BYREF
  gid_t v20; // [xsp+28h] [xbp-58h] BYREF
  uid_t v21; // [xsp+2Ch] [xbp-54h] BYREF
  __int128 v22; // [xsp+30h] [xbp-50h] BYREF
  __int128 v23; // [xsp+40h] [xbp-40h]

  v20 = -1;
  v21 = -1;
  v19 = -1;
  *a2 = 0LL;
  v10 = a5[1];
  v22 = *a5;
  v23 = v10;
  sub_100000AB0(&v22, 0xFFFFFFFFLL, &v21, &v20, &v19, 0LL);
  v11 = v21;
  if ( a4 && v21 )
  {
    v12 = a5[1];
    v22 = *a5;
    v23 = v12;
    if ( (sub_100004CF4(&v22, "com.apple.notify.root_access") & 1) != 0 )
    {
      v11 = 0LL;
      v21 = 0;
    }
    else
    {
      v11 = v21;
    }
  }
  result = sub_1000064E8(a1, v11, v20, 2LL);
  *a3 = result;
  if ( !(_DWORD)result )
  {
    v14 = a5[1];
    v22 = *a5;
    v23 = v14;
    result = sub_100000B98(a1, (__int64)&v22);
    if ( (result & 1) != 0 )
    {
      ++qword_100014078;
      ++qword_100014098;
      v15 = sub_100004DAC(a1, v21, v20);
      *a3 = v15;
      if ( v15 == 10 )
        __assert_rtn("__notify_server_post_2", "notify_proc.c", 623, "*status != NOTIFY_STATUS_NULL_INPUT");
      v16 = os_set_str_ptr_find(&unk_100014190, a1);
      if ( !v16 || qword_1000141A8 == v16 )
      {
        *a3 = 60;
        *a2 = -1LL;
        ++qword_100014080;
        return sub_100004BF4(7LL, "__notify_server_post %s %d\n");
      }
      v17 = v16 - qword_1000141A8;
      ++*(_DWORD *)(v17 + 64);
      v18 = *(_QWORD *)(v17 + 16);
      *a2 = v18;
      if ( v18 == -1 )
        return sub_100004BF4(7LL, "__notify_server_post %s %d\n");
      return sub_100004BF4(7LL, "__notify_server_post %s %d [%llu]\n");
    }
    else
    {
      *a3 = 7;
    }
  }
  return result;
}
