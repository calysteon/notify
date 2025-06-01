// Pseudocode for function at 0x100001964
__int64 __fastcall sub_100001964(const char *a1, __int64 a2, mach_port_name_t a3, __int128 *a4)
{
  __int64 result; // x0
  __int128 v9; // q1
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x21
  __int128 v13; // q1
  __int64 v14; // x0
  __int64 *v15; // x8
  __int64 *v16; // x22
  __int64 v17; // x8
  __int64 v18; // x9
  __int128 v19; // [xsp+30h] [xbp-60h] BYREF
  __int128 v20; // [xsp+40h] [xbp-50h]
  unsigned int v21; // [xsp+5Ch] [xbp-34h] BYREF
  gid_t v22; // [xsp+60h] [xbp-30h] BYREF
  uid_t v23; // [xsp+64h] [xbp-2Ch] BYREF
  unsigned __int64 v24; // [xsp+68h] [xbp-28h] BYREF

  v24 = 0LL;
  v22 = -1;
  v23 = -1;
  v21 = -1;
  if ( a3 + 1 < 2 )
    return 59LL;
  v9 = a4[1];
  v19 = *a4;
  v20 = v9;
  sub_100000AB0(&v19, a2, &v23, &v22, &v21, &v24);
  *(_QWORD *)&xmmword_1000140A0 = xmmword_1000140A0 + 1;
  ++qword_1000140C8;
  sub_100004BF4(7LL, "__notify_server_register_mach_port %s %d %d\n", a1, v21, a2);
  if ( a1 && (*(_QWORD *)&v19 = 0LL, !(unsigned int)sub_100006DB0(a1, v21, a2, v23, v22, &v19)) )
  {
    v10 = v19;
    *(_BYTE *)(v19 + 79) = *(_BYTE *)(v19 + 79) & 0xF0 | 3;
    *(_DWORD *)(v10 + 56) = a3;
    v11 = os_set_64_ptr_find(&unk_1000141D0, v24);
    if ( v11 )
      v12 = v11 - qword_1000141E8;
    else
      v12 = 0LL;
    if ( !strncmp(a1, "com.apple.system.notify.service.", 0x20uLL) )
    {
      v13 = a4[1];
      v19 = *a4;
      v20 = v13;
      sub_1000088EC(a1, v12, &v19);
    }
    sub_100000FF4(v12, v21);
    v14 = os_set_32_ptr_find(&unk_1000141F0);
    if ( v14 && (v15 = (__int64 *)(v14 - qword_100014208), v14 != qword_100014208) )
    {
      v18 = *v15;
      *(_QWORD *)(v12 + 32) = *v15;
      if ( v18 )
        *(_QWORD *)(v18 + 40) = v12 + 32;
      result = 0LL;
      *v15 = v12;
      *(_QWORD *)(v12 + 40) = v15;
    }
    else
    {
      result = malloc_type_calloc(1LL, 16LL, 0x1020040EDED9539LL);
      if ( result )
      {
        v16 = (__int64 *)result;
        ++dword_100014278;
        *(_QWORD *)result = 0LL;
        *(_DWORD *)(result + 8) = a3;
        os_set_32_ptr_insert(&unk_1000141F0, result + 8);
        v17 = *v16;
        *(_QWORD *)(v12 + 32) = *v16;
        if ( v17 )
          *(_QWORD *)(v17 + 40) = v12 + 32;
        *v16 = v12;
        *(_QWORD *)(v12 + 40) = v16;
        if ( mach_port_insert_right(mach_task_self_, a3, a3, 0x13u) )
          sub_1000008E4(v12);
        else
          sub_10000083C(a3);
        return 0LL;
      }
      else
      {
        qword_100014010 = (__int64)"BUG IN LIBNOTIFY: Unable to allocate portproc";
        __break(1u);
      }
    }
  }
  else
  {
    mach_port_deallocate(mach_task_self_, a3);
    return 7LL;
  }
  return result;
}
