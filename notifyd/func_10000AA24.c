// Pseudocode for function at 0x10000AA24
void __fastcall sub_10000AA24(__int64 a1, __int64 a2)
{
  int v3; // w8
  __int64 v4; // x20
  __int128 v5; // q1
  uid_t v6; // w21
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x20
  __int64 i; // x21
  audit_token_t atoken; // [xsp+10h] [xbp-70h] BYREF
  audit_token_t v12; // [xsp+30h] [xbp-50h]

  if ( (*(_DWORD *)a1 & 0x80000000) != 0 || *(_DWORD *)(a1 + 4) != 36 )
  {
    v3 = -304;
    goto LABEL_7;
  }
  if ( *(_DWORD *)(a1 + 36) || *(_DWORD *)(a1 + 40) <= 0x1Fu )
  {
    v3 = -309;
LABEL_7:
    *(_DWORD *)(a2 + 32) = v3;
    *(NDR_record_t *)(a2 + 24) = NDR_record;
    return;
  }
  v4 = *(unsigned int *)(a1 + 32);
  v5 = *(_OWORD *)(a1 + 72);
  *(_OWORD *)v12.val = *(_OWORD *)(a1 + 56);
  *(_OWORD *)&v12.val[4] = v5;
  *(_OWORD *)atoken.val = *(_OWORD *)v12.val;
  *(_OWORD *)&atoken.val[4] = v5;
  v6 = audit_token_to_euid(&atoken);
  ++qword_100014100;
  sub_100004BF4((FILE *)7, "__notify_server_resume_pid %d\n", v4);
  if ( v6 )
  {
    atoken = v12;
    v7 = audit_token_to_pid(&atoken);
    sub_100004BF4((FILE *)4, "__notify_server_resume_pid %d permission denied for caller %d \n", v4, v7);
  }
  else
  {
    v8 = os_set_32_ptr_find(&unk_100014210);
    if ( v8 )
    {
      v9 = v8 - qword_100014228;
      if ( v8 != qword_100014228 )
      {
        *(_DWORD *)(v9 + 20) &= ~1u;
        for ( i = *(_QWORD *)v9; i; i = *(_QWORD *)(i + 16) )
          sub_100006CEC(i, v9, 0LL);
      }
    }
  }
  *(_DWORD *)(a2 + 32) = 0;
}
