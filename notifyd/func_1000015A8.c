// Pseudocode for function at 0x1000015A8
__int64 __fastcall sub_1000015A8(const char *a1, __int64 a2, __int64 a3, __int128 *a4)
{
  __int128 v8; // q1
  unsigned int v9; // w23
  __int64 result; // x0
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x21
  __int128 v14; // q1
  __int128 v15; // [xsp+20h] [xbp-70h] BYREF
  __int128 v16; // [xsp+30h] [xbp-60h]
  unsigned int v17; // [xsp+4Ch] [xbp-44h] BYREF
  gid_t v18; // [xsp+50h] [xbp-40h] BYREF
  uid_t v19; // [xsp+54h] [xbp-3Ch] BYREF
  unsigned __int64 v20; // [xsp+58h] [xbp-38h] BYREF

  v20 = 0LL;
  v18 = -1;
  v19 = -1;
  v17 = -1;
  v8 = a4[1];
  v15 = *a4;
  v16 = v8;
  sub_100000AB0(&v15, a2, &v19, &v18, &v17, &v20);
  *(_QWORD *)&xmmword_1000140A0 = xmmword_1000140A0 + 1;
  ++qword_1000140B8;
  sub_100004BF4(7LL, "__notify_server_register_signal %s %d %d %d\n", a1, v17, a2, a3);
  if ( !a1 )
    return 1LL;
  v9 = v17;
  *(_QWORD *)&v15 = 0LL;
  result = sub_100006DB0(a1, v17, a2, v19, v18, &v15);
  if ( !(_DWORD)result )
  {
    v11 = v15;
    *(_BYTE *)(v15 + 79) = *(_BYTE *)(v15 + 79) & 0xF0 | 5;
    *(_DWORD *)(v11 + 68) = v9;
    *(_DWORD *)(v11 + 56) = a3;
    v12 = os_set_64_ptr_find(&unk_1000141D0, v20);
    if ( v12 )
      v13 = v12 - qword_1000141E8;
    else
      v13 = 0LL;
    if ( !strncmp(a1, "com.apple.system.notify.service.", 0x20uLL) )
    {
      v14 = a4[1];
      v15 = *a4;
      v16 = v14;
      sub_1000088EC(a1, v13, &v15);
    }
    sub_100000FF4(v13, v17);
    return 0LL;
  }
  return result;
}
