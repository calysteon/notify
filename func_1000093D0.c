// Pseudocode for function at 0x1000093D0
__int64 __fastcall sub_1000093D0(__int64 result, __int64 a2)
{
  int v3; // t1
  int v4; // w8
  __int128 v5; // q0
  __int128 v6; // q1
  __int64 v7; // x0
  int v8; // w21
  __int64 v9; // x0
  __int64 v10; // x20
  unsigned int *v11; // x8
  __int64 v12; // x0
  __int64 v13; // x21
  mach_port_name_t v14; // w21
  __int64 v15; // x22
  mach_port_name_t v16; // w8
  audit_token_t atoken; // [xsp+20h] [xbp-90h] BYREF
  mach_port_name_t name; // [xsp+4Ch] [xbp-64h] BYREF
  __int128 v19; // [xsp+50h] [xbp-60h]
  __int128 v20; // [xsp+60h] [xbp-50h]

  if ( (*(_DWORD *)result & 0x80000000) != 0 || *(_DWORD *)(result + 4) != 24 )
  {
    v4 = -304;
    goto LABEL_7;
  }
  v3 = *(_DWORD *)(result + 24);
  result += 24LL;
  if ( v3 || *(_DWORD *)(result + 4) <= 0x1Fu )
  {
    v4 = -309;
LABEL_7:
    *(_DWORD *)(a2 + 32) = v4;
    *(NDR_record_t *)(a2 + 24) = NDR_record;
    return result;
  }
  *(_QWORD *)(a2 + 32) = 0x10000000000000LL;
  v6 = *(_OWORD *)(result + 36);
  v19 = *(_OWORD *)(result + 20);
  v5 = v19;
  v20 = v6;
  name = 0;
  *(_DWORD *)(a2 + 48) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  *(_OWORD *)atoken.val = v5;
  *(_OWORD *)&atoken.val[4] = v6;
  v7 = audit_token_to_pid(&atoken);
  v8 = v7;
  sub_100004BF4((FILE *)7, "__notify_generate_common_port %d\n", v7);
  v9 = os_set_32_ptr_find(&unk_100014210);
  if ( !v9 || (v10 = v9 - qword_100014228, v9 == qword_100014228) )
    v10 = sub_100001094(0LL, v8);
  v11 = *(unsigned int **)(v10 + 24);
  if ( v11 )
  {
    v12 = *(_QWORD *)v11;
    if ( *(_QWORD *)v11 )
    {
      do
      {
        v13 = *(_QWORD *)(v12 + 16);
        sub_1000008E4(v12);
        v12 = v13;
      }
      while ( v13 );
      v11 = *(unsigned int **)(v10 + 24);
    }
    sub_100001250(v11);
    *(_QWORD *)(v10 + 24) = 0LL;
  }
  *(_QWORD *)&atoken.val[4] = 0LL;
  *(_OWORD *)atoken.val = xmmword_10000BD08;
  if ( mach_port_construct(mach_task_self_, (mach_port_options_ptr_t)&atoken, 0LL, &name) )
    __assert_rtn("__notify_generate_common_port", "notify_proc.c", 1750, "kstatus == KERN_SUCCESS");
  if ( mach_port_insert_right(mach_task_self_, name, name, 0x14u) )
    __assert_rtn("__notify_generate_common_port", "notify_proc.c", 1754, "kstatus == KERN_SUCCESS");
  v14 = name;
  result = malloc_type_calloc(1LL, 16LL, 0x1020040EDED9539LL);
  if ( result )
  {
    v15 = result;
    ++dword_100014278;
    *(_QWORD *)result = 0LL;
    *(_DWORD *)(result + 8) = v14;
    *(_DWORD *)(result + 12) = 2;
    os_set_32_ptr_insert(&unk_1000141F0, result + 8);
    result = sub_10000083C(v14);
    *(_QWORD *)(v10 + 24) = v15;
    v16 = name;
    *(NDR_record_t *)(a2 + 40) = NDR_record;
    *(_DWORD *)a2 |= 0x80000000;
    *(_DWORD *)(a2 + 4) = 52;
    *(_DWORD *)(a2 + 24) = 1;
    *(_DWORD *)(a2 + 28) = v16;
  }
  else
  {
    qword_100014010 = (__int64)"BUG IN LIBNOTIFY: Unable to allocate portproc";
    __break(1u);
  }
  return result;
}
