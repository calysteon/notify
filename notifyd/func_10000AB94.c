// Pseudocode for function at 0x10000AB94
FILE *__fastcall sub_10000AB94(FILE *result, __int64 a2)
{
  int v3; // w8
  __int64 size; // x20
  __int128 v5; // q1
  uid_t v6; // w21
  __int64 v7; // x0
  audit_token_t atoken; // [xsp+10h] [xbp-70h] BYREF
  audit_token_t v9; // [xsp+30h] [xbp-50h]

  if ( ((__int64)result->_p & 0x80000000) != 0 || HIDWORD(result->_p) != 36 )
  {
    v3 = -304;
    goto LABEL_7;
  }
  if ( *(&result->_bf._size + 1) || result->_lbfsize <= 0x1Fu )
  {
    v3 = -309;
LABEL_7:
    *(_DWORD *)(a2 + 32) = v3;
    *(NDR_record_t *)(a2 + 24) = NDR_record;
    return result;
  }
  size = (unsigned int)result->_bf._size;
  v5 = *(_OWORD *)&result->_seek;
  *(_OWORD *)v9.val = *(_OWORD *)&result->_close;
  *(_OWORD *)&v9.val[4] = v5;
  *(_OWORD *)atoken.val = *(_OWORD *)v9.val;
  *(_OWORD *)&atoken.val[4] = v5;
  v6 = audit_token_to_euid(&atoken);
  ++qword_1000140F8;
  sub_100004BF4((FILE *)7, "__notify_server_suspend_pid %d\n", size);
  if ( v6 )
  {
    atoken = v9;
    v7 = audit_token_to_pid(&atoken);
    result = sub_100004BF4((FILE *)4, "__notify_server_suspend_pid %d permission denied for caller %d \n", size, v7);
  }
  else
  {
    result = (FILE *)os_set_32_ptr_find(&unk_100014210);
    if ( result )
    {
      if ( (FILE *)qword_100014228 != result )
        *(_DWORD *)((char *)&result->_file - qword_100014228 + 2) |= 1u;
    }
  }
  *(_DWORD *)(a2 + 32) = 0;
  return result;
}
