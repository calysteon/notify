// Pseudocode for function at 0x100000ECC
__int64 __fastcall sub_100000ECC(const char *a1, __int64 a2, __int128 *a3)
{
  __int128 v6; // q1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x22
  __int128 v10; // q1
  __int128 v12; // [xsp+20h] [xbp-60h] BYREF
  __int128 v13; // [xsp+30h] [xbp-50h]
  unsigned int v14; // [xsp+44h] [xbp-3Ch] BYREF
  gid_t v15; // [xsp+48h] [xbp-38h] BYREF
  uid_t v16; // [xsp+4Ch] [xbp-34h] BYREF
  unsigned __int64 v17; // [xsp+50h] [xbp-30h] BYREF
  char v18[8]; // [xsp+58h] [xbp-28h] BYREF

  v17 = 0LL;
  v15 = -1;
  v16 = -1;
  v14 = -1;
  xmmword_1000140A0 = (__int128)vaddq_s64((int64x2_t)xmmword_1000140A0, vdupq_n_s64(1uLL));
  v6 = a3[1];
  v12 = *a3;
  v13 = v6;
  sub_100000AB0(&v12, a2, &v16, &v15, &v14, &v17);
  sub_100004BF4(7LL, "__notify_server_register_plain %s %d %d\n", a1, v14, a2);
  v7 = sub_100006FDC(a1, v14, a2, 0xFFFFFFFFLL, v16, v15, v18);
  if ( !(_DWORD)v7 )
  {
    v8 = os_set_64_ptr_find(&unk_1000141D0, v17);
    if ( v8 )
      v9 = v8 - qword_1000141E8;
    else
      v9 = 0LL;
    if ( !strncmp(a1, "com.apple.system.notify.service.", 0x20uLL) )
    {
      v10 = a3[1];
      v12 = *a3;
      v13 = v10;
      sub_1000088EC(a1, v9, &v12);
    }
    sub_100000FF4(v9, v14);
  }
  return v7;
}
