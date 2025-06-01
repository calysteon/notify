// Pseudocode for function at 0x10000AF6C
__int64 __fastcall sub_10000AF6C(__int64 result, __int64 a2)
{
  int v3; // w8
  __int64 v4; // x20
  __int128 v5; // q1
  int v6; // w8
  __int64 v7; // x1
  __int128 v8[2]; // [xsp+10h] [xbp-40h] BYREF
  unsigned int v9; // [xsp+34h] [xbp-1Ch] BYREF
  gid_t v10; // [xsp+38h] [xbp-18h] BYREF
  uid_t v11; // [xsp+3Ch] [xbp-14h] BYREF

  if ( (*(_DWORD *)result & 0x80000000) != 0 || *(_DWORD *)(result + 4) != 36 )
  {
    v3 = -304;
    goto LABEL_7;
  }
  if ( *(_DWORD *)(result + 36) || *(_DWORD *)(result + 40) <= 0x1Fu )
  {
    v3 = -309;
LABEL_7:
    *(_DWORD *)(a2 + 32) = v3;
    *(NDR_record_t *)(a2 + 24) = NDR_record;
    return result;
  }
  v4 = *(unsigned int *)(result + 32);
  v5 = *(_OWORD *)(result + 72);
  v8[0] = *(_OWORD *)(result + 56);
  v8[1] = v5;
  v10 = -1;
  v11 = -1;
  v9 = -1;
  *(_QWORD *)(a2 + 36) = 0LL;
  sub_100000AB0(v8, 0xFFFFFFFFLL, &v11, &v10, &v9, 0LL);
  xmmword_100014110 = (__int128)vaddq_s64((int64x2_t)xmmword_100014110, vdupq_n_s64(1uLL));
  sub_100004BF4((FILE *)7, "__notify_server_get_state %d %d\n", v9, v4);
  result = os_set_64_ptr_find(&unk_1000141D0, v4 | ((unsigned __int64)v9 << 32));
  if ( result && qword_1000141E8 != result )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(result - qword_1000141E8 + 48) + 16LL);
    *(_QWORD *)(a2 + 36) = 0LL;
    result = os_set_64_ptr_find(&unk_1000141B0, v7);
    if ( !result || qword_1000141C8 == result )
    {
      *(_DWORD *)(a2 + 44) = 1;
      __assert_rtn(
        "__notify_server_get_state",
        "notify_proc.c",
        1182,
        "*status == NOTIFY_STATUS_OK || *status == NOTIFY_STATUS_NOT_AUTHORIZED");
    }
    v6 = 0;
    *(_QWORD *)(a2 + 36) = *(_QWORD *)(result - qword_1000141C8 + 24);
  }
  else
  {
    v6 = 50;
  }
  *(_DWORD *)(a2 + 44) = v6;
  *(_DWORD *)(a2 + 32) = 0;
  *(NDR_record_t *)(a2 + 24) = NDR_record;
  *(_DWORD *)(a2 + 4) = 48;
  return result;
}
