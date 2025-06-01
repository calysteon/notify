// Pseudocode for function at 0x100001334
__int64 __fastcall sub_100001334(
        const char *a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4,
        _QWORD *a5,
        _DWORD *a6,
        __int128 *a7)
{
  __int128 v14; // q1
  __int64 v15; // x0
  __int64 v16; // x26
  int v17; // w11
  __int64 v18; // x8
  __int128 v19; // q1
  __int64 result; // x0
  __int64 v21; // x0
  __int64 v22; // x21
  __int128 v23; // q1
  unsigned int v24; // [xsp+1Ch] [xbp-84h] BYREF
  gid_t v25; // [xsp+20h] [xbp-80h] BYREF
  uid_t v26; // [xsp+24h] [xbp-7Ch] BYREF
  unsigned __int64 v27; // [xsp+28h] [xbp-78h] BYREF
  __int128 v28; // [xsp+30h] [xbp-70h] BYREF
  __int128 v29; // [xsp+40h] [xbp-60h]

  v27 = 0LL;
  v25 = -1;
  v26 = -1;
  v24 = -1;
  *a3 = 0;
  *a4 = 0;
  *a5 = 0LL;
  *a6 = 0;
  v14 = a7[1];
  v28 = *a7;
  v29 = v14;
  sub_100000AB0(&v28, a2, &v26, &v25, &v24, &v27);
  *(_QWORD *)&xmmword_1000140A0 = xmmword_1000140A0 + 1;
  ++qword_1000140B0;
  if ( dword_1000142D8 )
  {
    v15 = os_set_str_ptr_find(&unk_100014190, a1);
    if ( !v15 || qword_1000141A8 == v15 || (v16 = *(unsigned int *)(v15 - qword_1000141A8 + 52), (_DWORD)v16 == -1) )
    {
      if ( (unsigned int)dword_1000142D8 < 2 )
      {
LABEL_12:
        if ( dword_1000142DC + 1 < (unsigned int)dword_1000142D8 )
          v18 = (unsigned int)(dword_1000142DC + 1);
        else
          v18 = 1LL;
        dword_1000142DC = v18;
        sub_100004BF4(7LL, "reused shared memory slot %u\n", v18);
        v16 = (unsigned int)dword_1000142DC;
      }
      else
      {
        v17 = dword_1000142D8 - 1;
        LODWORD(v16) = dword_1000142DC;
        while ( 1 )
        {
          v16 = (int)v16 + 1 < (unsigned int)dword_1000142D8 ? (unsigned int)(v16 + 1) : 1LL;
          if ( !*(_DWORD *)(qword_1000142E8 + 4LL * (unsigned int)v16) )
            break;
          if ( !--v17 )
            goto LABEL_12;
        }
        dword_1000142DC = v16;
      }
      *(_DWORD *)(qword_1000142E0 + 4 * v16) = 1;
    }
    ++*(_DWORD *)(qword_1000142E8 + 4 * v16);
    sub_100004BF4(7LL, "__notify_server_register_check %s %d %d\n", a1, v24, a2);
    *a3 = 4 * dword_1000142D8;
    *a4 = v16;
    result = sub_100006FDC(a1, v24, a2, v16, v26, v25, a5);
    *a6 = result;
    if ( !(_DWORD)result )
    {
      v21 = os_set_64_ptr_find(&unk_1000141D0, v27);
      if ( v21 )
        v22 = v21 - qword_1000141E8;
      else
        v22 = 0LL;
      if ( !strncmp(a1, "com.apple.system.notify.service.", 0x20uLL) )
      {
        v23 = a7[1];
        v28 = *a7;
        v29 = v23;
        sub_1000088EC(a1, v22, &v28);
      }
      return sub_100000FF4(v22, v24);
    }
  }
  else
  {
    *a3 = -1;
    *a4 = -1;
    v19 = a7[1];
    v28 = *a7;
    v29 = v19;
    return sub_100000ECC(a1, a2, &v28);
  }
  return result;
}
