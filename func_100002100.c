// Pseudocode for function at 0x100002100
const char *__fastcall sub_100002100(
        const char *result,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int64 a8,
        const char *a9,
        int a10,
        unsigned int a11,
        int *a12,
        _QWORD *a13,
        int *a14,
        _OWORD *a15)
{
  int v19; // w8
  const char *v20; // x21
  __int128 v21; // q1
  __int64 v23; // x28
  __int64 v24; // x27
  unsigned __int64 v25; // x24
  _OWORD *v26; // x19
  __int128 v27; // q1
  int v28; // w0
  __int128 v29; // q1
  __int128 v30; // q1
  __int64 v31; // x8
  __int64 v32; // x9
  __int128 v33; // q1
  __int128 v34; // q1
  __int64 v35; // x8
  _QWORD *v36; // x8
  __int64 v37; // [xsp+38h] [xbp-D8h]
  __int64 v38; // [xsp+58h] [xbp-B8h]
  audit_token_t atoken; // [xsp+90h] [xbp-80h] BYREF
  int v42; // [xsp+B0h] [xbp-60h] BYREF
  pid_t pidp[3]; // [xsp+B4h] [xbp-5Ch] BYREF

  pidp[0] = -1;
  *a12 = 0;
  *a13 = 0LL;
  *a14 = 0;
  if ( !a9 && a10 || a9 && (!a10 || a9[a10 - 1]) )
    goto LABEL_3;
  v20 = result;
  *(_QWORD *)&xmmword_100014178 = xmmword_100014178 + 1;
  v21 = a15[1];
  *(_OWORD *)atoken.val = *a15;
  *(_OWORD *)&atoken.val[4] = v21;
  audit_token_to_au32(&atoken, 0LL, 0LL, 0LL, 0LL, 0LL, pidp, 0LL, 0LL);
  v38 = a7;
  v37 = a7;
  v23 = a2;
  v24 = a5;
  sub_100004BF4(
    7LL,
    "__notify_server_regenerate %s %d %d %d %u %d %d %llu %s %d\n",
    v20,
    (unsigned int)pidp[0],
    v23,
    a3,
    a4,
    a5,
    a6,
    v37,
    a9,
    a11);
  v25 = (unsigned int)v23 | ((unsigned __int64)(unsigned int)pidp[0] << 32);
  result = (const char *)os_set_64_ptr_find(&unk_1000141D0, v25);
  if ( result && (const char *)qword_1000141E8 != result )
  {
    v19 = 51;
    goto LABEL_4;
  }
  if ( (int)a3 > 4 )
  {
    if ( (_DWORD)a3 == 5 )
    {
      v26 = a15;
      v33 = a15[1];
      *(_OWORD *)atoken.val = *a15;
      *(_OWORD *)&atoken.val[4] = v33;
      v28 = sub_1000015A8(v20, v23, v24, (__int128 *)&atoken);
      goto LABEL_26;
    }
    if ( (_DWORD)a3 == 7 )
    {
      v26 = a15;
      v29 = a15[1];
      *(_OWORD *)atoken.val = *a15;
      *(_OWORD *)&atoken.val[4] = v29;
      v28 = sub_100002410(v20, v23, &atoken);
      goto LABEL_26;
    }
LABEL_19:
    v19 = 52;
    goto LABEL_4;
  }
  if ( (_DWORD)a3 != 1 )
  {
    if ( (_DWORD)a3 == 2 )
    {
      v26 = a15;
      v27 = a15[1];
      *(_OWORD *)atoken.val = *a15;
      *(_OWORD *)&atoken.val[4] = v27;
      v28 = sub_100000ECC(v20, v23, (__int128 *)&atoken);
LABEL_26:
      *a14 = v28;
      goto LABEL_27;
    }
    goto LABEL_19;
  }
  if ( dword_1000142D8 <= (unsigned int)a6 )
  {
LABEL_3:
    v19 = 6;
LABEL_4:
    *a14 = v19;
    return result;
  }
  v26 = a15;
  v30 = a15[1];
  *(_OWORD *)atoken.val = *a15;
  *(_OWORD *)&atoken.val[4] = v30;
  sub_100001334(v20, v23, &v42, a12, a13, a14, (__int128 *)&atoken);
  if ( !*a14 )
  {
    v31 = *a12;
    if ( (_DWORD)v31 != -1 )
    {
      v32 = qword_1000142F0;
      if ( qword_1000142F0 )
      {
        *(_DWORD *)(qword_1000142E0 + 4 * v31) = *(_DWORD *)(qword_1000142E0 + 4 * v31)
                                               + *(_DWORD *)(qword_1000142F0 + 4LL * (int)a6)
                                               - 1;
        *(_DWORD *)(v32 + 4LL * (int)a6) = 0;
      }
    }
  }
LABEL_27:
  if ( a9 )
  {
    v34 = v26[1];
    *(_OWORD *)atoken.val = *v26;
    *(_OWORD *)&atoken.val[4] = v34;
    sub_100001FD8(v23, a9, a10, a11, (__int128 *)&atoken);
  }
  result = (const char *)os_set_64_ptr_find(&unk_1000141D0, v25);
  if ( result && (v35 = qword_1000141E8, (const char *)qword_1000141E8 != result) )
  {
    *a14 = 0;
    v36 = *(_QWORD **)&result[-v35 + 48];
    *a13 = v36[2];
    if ( v36[4] < a8 )
      v36[3] = v38;
  }
  else if ( !*a14 )
  {
    v19 = 50;
    goto LABEL_4;
  }
  return result;
}
