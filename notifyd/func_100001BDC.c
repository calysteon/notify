// Pseudocode for function at 0x100001BDC
__int64 __fastcall sub_100001BDC(unsigned int a1, __int64 a2, _QWORD *a3, int *a4, int a5, __int128 *a6, int a7)
{
  __int128 v14; // q1
  __int128 v15; // q1
  __int64 v16; // x0
  int v17; // w8
  __int64 v19; // x27
  const char *v20; // x25
  __int128 v21; // q1
  __int64 v22; // x8
  int v23; // w0
  bool v24; // zf
  __int64 v25; // x8
  __int128 v26; // q1
  unsigned int v27; // [xsp+44h] [xbp-7Ch] BYREF
  gid_t v28; // [xsp+48h] [xbp-78h] BYREF
  uid_t v29; // [xsp+4Ch] [xbp-74h] BYREF
  __int128 v30; // [xsp+50h] [xbp-70h] BYREF
  __int128 v31; // [xsp+60h] [xbp-60h]

  v28 = -1;
  v29 = -1;
  v27 = -1;
  *a3 = 0LL;
  v14 = a6[1];
  v30 = *a6;
  v31 = v14;
  sub_100000AB0(&v30, 0xFFFFFFFFLL, &v29, &v28, &v27, 0LL);
  if ( a5 )
  {
    if ( v29 )
    {
      v15 = a6[1];
      v30 = *a6;
      v31 = v15;
      if ( (unsigned int)sub_100004CF4(&v30, "com.apple.notify.root_access") )
        v29 = 0;
    }
  }
  ++qword_100014130;
  ++qword_100014148;
  v16 = os_set_64_ptr_find(&unk_1000141D0, a1 | ((unsigned __int64)v27 << 32));
  if ( !v16 || qword_1000141E8 == v16 )
  {
    v17 = 50;
LABEL_8:
    *a4 = v17;
    *a3 = -1LL;
    return sub_100004BF4(7LL, "__notify_server_set_state_3 %d %d %llu [uid %d%s gid %d]\n");
  }
  v19 = v16 - qword_1000141E8;
  v20 = *(const char **)(*(_QWORD *)(v16 - qword_1000141E8 + 48) + 8LL);
  v21 = a6[1];
  v30 = *a6;
  v31 = v21;
  if ( !(unsigned int)sub_100000B98(v20, (__int64)&v30)
    || a7
    && (v26 = a6[1],
        v30 = *a6,
        v31 = v26,
        (unsigned int)sandbox_check_by_audit_token(&v30, "darwin-notification-post", 9LL)) )
  {
    v17 = 7;
    goto LABEL_8;
  }
  v22 = *(_QWORD *)(v19 + 48);
  if ( !v22 )
    __assert_rtn("_internal_notify_server_set_state_3", "notify_proc.c", 1297, "c->name_info != NULL");
  v23 = sub_100006D20(*(_QWORD *)(v22 + 16), a2, v29, v28);
  *a4 = v23;
  if ( v23 )
    v24 = v23 == 7;
  else
    v24 = 1;
  if ( !v24 )
    __assert_rtn(
      "_internal_notify_server_set_state_3",
      "notify_proc.c",
      1299,
      "*status == NOTIFY_STATUS_OK || *status == NOTIFY_STATUS_NOT_AUTHORIZED");
  v25 = *(_QWORD *)(*(_QWORD *)(v19 + 48) + 16LL);
  *a3 = v25;
  if ( v25 != -1 )
    return sub_100004BF4(7LL, "__notify_server_set_state_3 %d %d %llu [%llu] [uid %d%s gid %d]\n", v27);
  return sub_100004BF4(7LL, "__notify_server_set_state_3 %d %d %llu [uid %d%s gid %d]\n");
}
