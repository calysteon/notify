// Pseudocode for function at 0x100002410
__int64 __fastcall sub_100002410(const char *a1, __int64 a2, __int128 *a3)
{
  __int128 v6; // q1
  __int64 v7; // x0
  __int64 *v8; // x22
  __int64 result; // x0
  __int64 v10; // x0
  _QWORD *v11; // x21
  __int128 v12; // q1
  __int64 v13; // x8
  __int64 *v14; // x8
  __int64 v15; // x9
  __int128 v16; // [xsp+20h] [xbp-60h] BYREF
  __int128 v17; // [xsp+30h] [xbp-50h]
  unsigned int v18; // [xsp+4Ch] [xbp-34h] BYREF
  gid_t v19; // [xsp+50h] [xbp-30h] BYREF
  uid_t v20; // [xsp+54h] [xbp-2Ch] BYREF
  unsigned __int64 v21; // [xsp+58h] [xbp-28h] BYREF

  v21 = 0LL;
  v19 = -1;
  v20 = -1;
  v18 = -1;
  v6 = a3[1];
  v16 = *a3;
  v17 = v6;
  sub_100000AB0(&v16, a2, &v20, &v19, &v18, &v21);
  *(_QWORD *)&xmmword_1000140A0 = xmmword_1000140A0 + 1;
  ++qword_1000140D8;
  sub_100004BF4(7LL, "_notify_internal_register_common_port %s %d %d\n", a1, v18, a2);
  v7 = os_set_32_ptr_find(&unk_100014210);
  if ( v7 && (v8 = (__int64 *)(v7 - qword_100014228), v7 != qword_100014228) && v8[3] )
  {
    if ( a1 )
    {
      *(_QWORD *)&v16 = 0LL;
      result = sub_100006DB0(a1, v18, a2, v20, v19, &v16);
      if ( !(_DWORD)result )
      {
        *(_BYTE *)(v16 + 79) = *(_BYTE *)(v16 + 79) & 0xF0 | 7;
        v10 = os_set_64_ptr_find(&unk_1000141D0, v21);
        if ( v10 )
          v11 = (_QWORD *)(v10 - qword_1000141E8);
        else
          v11 = 0LL;
        if ( !strncmp(a1, "com.apple.system.notify.service.", 0x20uLL) )
        {
          v12 = a3[1];
          v16 = *a3;
          v17 = v12;
          sub_1000088EC(a1, v11, &v16);
        }
        if ( v11 )
        {
          v13 = *v8;
          v11[2] = *v8;
          if ( v13 )
            *(_QWORD *)(v13 + 24) = v11 + 2;
          *v8 = (__int64)v11;
          v11[3] = v8;
        }
        v14 = (__int64 *)v8[3];
        v15 = *v14;
        v11[4] = *v14;
        if ( v15 )
          *(_QWORD *)(v15 + 40) = v11 + 4;
        result = 0LL;
        *v14 = (__int64)v11;
        v11[5] = v14;
      }
    }
    else
    {
      return 1LL;
    }
  }
  else
  {
    sub_100004BF4(7LL, "_notify_internal_register_common_port FAILED %s %d %d\n", a1, v18, a2);
    return 59LL;
  }
  return result;
}
