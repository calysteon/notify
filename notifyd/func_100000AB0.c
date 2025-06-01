// Pseudocode for function at 0x100000AB0
__int64 __fastcall sub_100000AB0(_OWORD *a1, __int64 a2, uid_t *a3, gid_t *a4, _DWORD *a5, unsigned __int64 *a6)
{
  __int128 v11; // q1
  __int128 v12; // q1
  __int128 v13; // q1
  __int64 v14; // x0
  __int64 v15; // x22
  unsigned __int64 v16; // x1
  __int64 result; // x0
  __int64 v18; // x20
  audit_token_t atoken; // [xsp+10h] [xbp-50h] BYREF

  if ( a3 )
  {
    v11 = a1[1];
    *(_OWORD *)atoken.val = *a1;
    *(_OWORD *)&atoken.val[4] = v11;
    *a3 = audit_token_to_euid(&atoken);
  }
  if ( a4 )
  {
    v12 = a1[1];
    *(_OWORD *)atoken.val = *a1;
    *(_OWORD *)&atoken.val[4] = v12;
    *a4 = audit_token_to_egid(&atoken);
  }
  v13 = a1[1];
  *(_OWORD *)atoken.val = *a1;
  *(_OWORD *)&atoken.val[4] = v13;
  v14 = audit_token_to_pid(&atoken);
  v15 = v14;
  if ( a5 )
    *a5 = v14;
  v16 = (unsigned int)a2 | (unsigned __int64)(v14 << 32);
  if ( a6 )
    *a6 = v16;
  result = os_set_64_ptr_find(&unk_1000141D0, v16);
  if ( result )
  {
    if ( qword_1000141E8 != result )
    {
      v18 = result - qword_1000141E8;
      sub_100004BF4(7LL, "duplicate token %d sent from PID %d\n", a2, v15);
      return sub_1000008E4(v18);
    }
  }
  return result;
}
