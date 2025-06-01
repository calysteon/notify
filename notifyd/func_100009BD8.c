// Pseudocode for function at 0x100009BD8
FILE *__fastcall sub_100009BD8(FILE *result, __int64 a2)
{
  int v3; // w8
  __int64 size; // x20
  __int128 v5; // q1
  __int64 v6; // x0
  __int64 v7; // x22
  __int64 v8; // x1
  __int64 v9; // x0
  __int64 v10; // x8
  __int128 v11[2]; // [xsp+20h] [xbp-50h] BYREF
  unsigned int v12; // [xsp+44h] [xbp-2Ch] BYREF
  gid_t v13; // [xsp+48h] [xbp-28h] BYREF
  uid_t v14; // [xsp+4Ch] [xbp-24h] BYREF

  if ( ((__int64)result->_p & 0x80000000) != 0 || HIDWORD(result->_p) != 36 )
  {
    v3 = -304;
    goto LABEL_7;
  }
  if ( !*(&result->_bf._size + 1) && result->_lbfsize > 0x1Fu )
  {
    size = (unsigned int)result->_bf._size;
    v5 = *(_OWORD *)&result->_seek;
    v11[0] = *(_OWORD *)&result->_close;
    v11[1] = v5;
    v13 = -1;
    v14 = -1;
    *(_QWORD *)(a2 + 36) = 0LL;
    v12 = -1;
    *(_QWORD *)(a2 + 44) = 0LL;
    sub_100000AB0(v11, 0xFFFFFFFFLL, &v14, &v13, &v12, 0LL);
    *(_QWORD *)&xmmword_100014110 = xmmword_100014110 + 1;
    ++qword_100014128;
    v6 = os_set_64_ptr_find(&unk_1000141D0, size | ((unsigned __int64)v12 << 32));
    if ( v6 && qword_1000141E8 != v6 )
    {
      v7 = v6 - qword_1000141E8;
      v8 = *(_QWORD *)(*(_QWORD *)(v6 - qword_1000141E8 + 48) + 16LL);
      *(_QWORD *)(a2 + 36) = 0LL;
      v9 = os_set_64_ptr_find(&unk_1000141B0, v8);
      if ( !v9 || qword_1000141C8 == v9 )
      {
        *(_DWORD *)(a2 + 52) = 1;
        __assert_rtn(
          "__notify_server_get_state_3",
          "notify_proc.c",
          1243,
          "*status == NOTIFY_STATUS_OK || *status == NOTIFY_STATUS_NOT_AUTHORIZED");
      }
      *(_QWORD *)(a2 + 36) = *(_QWORD *)(v9 - qword_1000141C8 + 24);
      *(_DWORD *)(a2 + 52) = 0;
      v10 = *(_QWORD *)(*(_QWORD *)(v7 + 48) + 16LL);
      *(_QWORD *)(a2 + 44) = v10;
      if ( v10 != -1 )
      {
        result = sub_100004BF4((FILE *)7, "__notify_server_get_state_3 %d %d [%llu]\n");
        goto LABEL_13;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 52) = 50;
      *(_QWORD *)(a2 + 44) = -1LL;
    }
    result = sub_100004BF4((FILE *)7, "__notify_server_get_state_3 %d %d\n");
LABEL_13:
    *(_DWORD *)(a2 + 32) = 0;
    *(NDR_record_t *)(a2 + 24) = NDR_record;
    *(_DWORD *)(a2 + 4) = 56;
    return result;
  }
  v3 = -309;
LABEL_7:
  *(_DWORD *)(a2 + 32) = v3;
  *(NDR_record_t *)(a2 + 24) = NDR_record;
  return result;
}
