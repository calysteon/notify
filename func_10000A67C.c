// Pseudocode for function at 0x10000A67C
__int64 __fastcall sub_10000A67C(__int64 result, __int64 a2)
{
  int v3; // w8
  __int64 v4; // x20
  int v5; // w22
  __int128 v6; // q1
  __int64 v7; // x21
  const char *v8; // x0
  __int64 v9; // x21
  int v10; // w22
  __int64 v11; // x8
  __int64 v12; // x0
  unsigned int v13; // [xsp+24h] [xbp-8Ch] BYREF
  int v14; // [xsp+28h] [xbp-88h] BYREF
  uid_t v15; // [xsp+2Ch] [xbp-84h] BYREF
  __int128 v16; // [xsp+30h] [xbp-80h] BYREF
  __int128 v17; // [xsp+40h] [xbp-70h]
  __int128 v18; // [xsp+50h] [xbp-60h]
  __int128 v19; // [xsp+60h] [xbp-50h]

  if ( (*(_DWORD *)result & 0x80000000) != 0 || *(_DWORD *)(result + 4) != 44 )
  {
    v3 = -304;
    goto LABEL_7;
  }
  if ( *(_DWORD *)(result + 44) || *(_DWORD *)(result + 48) <= 0x1Fu )
  {
    v3 = -309;
LABEL_7:
    *(_DWORD *)(a2 + 32) = v3;
    *(NDR_record_t *)(a2 + 24) = NDR_record;
    return result;
  }
  v4 = *(_QWORD *)(result + 32);
  v5 = *(_DWORD *)(result + 40);
  v6 = *(_OWORD *)(result + 80);
  v18 = *(_OWORD *)(result + 64);
  v19 = v6;
  v14 = -1;
  v15 = -1;
  v13 = -1;
  result = os_set_64_ptr_find(&unk_1000141B0, v4);
  if ( result )
  {
    v7 = result - qword_1000141C8;
    if ( result != qword_1000141C8 )
    {
      ++*(_DWORD *)(v7 + 64);
      v16 = v18;
      v17 = v19;
      sub_100000AB0(&v16, 0xFFFFFFFFLL, &v15, (gid_t *)&v14, &v13, 0LL);
      if ( v5 )
      {
        if ( v15 )
        {
          v16 = v18;
          v17 = v19;
          if ( sub_100004CF4(&v16, (__int64)"com.apple.notify.root_access") )
            v15 = 0;
        }
      }
      v8 = *(const char **)(v7 + 8);
      v16 = v18;
      v17 = v19;
      result = sub_100000B98(v8, (__int64)&v16);
      if ( (_DWORD)result )
      {
        result = sub_1000064E8(*(const char **)(v7 + 8), v15, v14, 2);
        if ( (_DWORD)result )
        {
          if ( (_DWORD)result == 10 )
            __assert_rtn("__notify_server_post_3", "notify_proc.c", 567, "status != NOTIFY_STATUS_NULL_INPUT");
        }
        else
        {
          ++qword_100014078;
          ++qword_100014088;
          sub_100004BF4((FILE *)7, "__notify_server_post %s %d by nameid: %llu \n", *(const char **)(v7 + 8), v13, v4);
          v10 = v14;
          v9 = v15;
          result = os_set_64_ptr_find(&unk_1000141B0, v4);
          if ( result && qword_1000141C8 != result )
          {
            v11 = *(unsigned int *)(result - qword_1000141C8 + 52);
            if ( (_DWORD)v11 != -1 )
              ++*(_DWORD *)(qword_1000142E0 + 4 * v11);
            v12 = os_set_64_ptr_find(&unk_1000141B0, v4);
            if ( !v12
              || qword_1000141C8 == v12
              || (result = sub_100006AA0(v12 - qword_1000141C8, v9, v10), (_DWORD)result) )
            {
              __assert_rtn("__notify_server_post_3", "notify_proc.c", 578, "status == NOTIFY_STATUS_OK");
            }
          }
        }
      }
    }
  }
  *(_DWORD *)(a2 + 32) = 0;
  return result;
}
