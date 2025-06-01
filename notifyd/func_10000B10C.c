// Pseudocode for function at 0x10000B10C
__int64 __fastcall sub_10000B10C(__int64 result, __int64 a2)
{
  int v3; // w8
  __int64 v4; // x20
  __int128 v5; // q0
  __int128 v6; // q1
  int v7; // w8
  int v8; // w9
  int v9; // w9
  audit_token_t atoken; // [xsp+10h] [xbp-70h] BYREF
  pid_t pidp; // [xsp+3Ch] [xbp-44h] BYREF
  __int128 v12; // [xsp+40h] [xbp-40h]
  __int128 v13; // [xsp+50h] [xbp-30h]

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
  v6 = *(_OWORD *)(result + 72);
  v12 = *(_OWORD *)(result + 56);
  v5 = v12;
  v13 = v6;
  pidp = -1;
  *(_DWORD *)(a2 + 36) = 0;
  ++qword_100014108;
  *(_OWORD *)atoken.val = v5;
  *(_OWORD *)&atoken.val[4] = v6;
  audit_token_to_au32(&atoken, 0LL, 0LL, 0LL, 0LL, 0LL, &pidp, 0LL, 0LL);
  sub_100004BF4((FILE *)7, "__notify_server_check %d %d\n", (unsigned int)pidp, v4);
  result = os_set_64_ptr_find(&unk_1000141D0, v4 | ((unsigned __int64)(unsigned int)pidp << 32));
  if ( result && qword_1000141E8 != result )
  {
    v8 = *(_DWORD *)(*(_QWORD *)(result - qword_1000141E8 + 48) + 60LL);
    if ( v8 == *(_DWORD *)(result - qword_1000141E8 + 72) )
    {
      v9 = 0;
    }
    else
    {
      *(_DWORD *)(result - qword_1000141E8 + 72) = v8;
      v9 = 1;
    }
    v7 = 0;
    *(_DWORD *)(a2 + 36) = v9;
  }
  else
  {
    v7 = 2;
  }
  *(_DWORD *)(a2 + 40) = v7;
  *(_DWORD *)(a2 + 32) = 0;
  *(NDR_record_t *)(a2 + 24) = NDR_record;
  *(_DWORD *)(a2 + 4) = 44;
  return result;
}
