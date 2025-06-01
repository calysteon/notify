// Pseudocode for function at 0x100001E20
__int64 __fastcall sub_100001E20(__int64 a1, __int64 a2, int a3, _OWORD *a4, int a5)
{
  __int128 v10; // q1
  const char *v11; // x24
  __int128 v12; // q1
  __int64 result; // x0
  const char *v14; // x23
  __int128 v15; // q1
  __int128 v16; // q1
  pid_t pidp; // [xsp+34h] [xbp-5Ch] BYREF
  gid_t egidp; // [xsp+38h] [xbp-58h] BYREF
  uid_t euidp; // [xsp+3Ch] [xbp-54h] BYREF
  audit_token_t atoken; // [xsp+40h] [xbp-50h] BYREF

  egidp = -1;
  euidp = -1;
  pidp = -1;
  ++qword_100014130;
  ++qword_100014140;
  v10 = a4[1];
  *(_OWORD *)atoken.val = *a4;
  *(_OWORD *)&atoken.val[4] = v10;
  audit_token_to_au32(&atoken, 0LL, &euidp, &egidp, 0LL, 0LL, &pidp, 0LL, 0LL);
  v11 = (const char *)&unk_10000D701;
  if ( a3 )
  {
    if ( euidp )
    {
      v12 = a4[1];
      *(_OWORD *)atoken.val = *a4;
      *(_OWORD *)&atoken.val[4] = v12;
      if ( (unsigned int)sub_100004CF4(&atoken, "com.apple.notify.root_access") )
      {
        euidp = 0;
        v11 = " (entitlement)";
      }
    }
  }
  result = os_set_64_ptr_find(&unk_1000141B0, a1);
  if ( result )
  {
    if ( qword_1000141C8 != result )
    {
      v14 = *(const char **)(result - qword_1000141C8 + 8);
      v15 = a4[1];
      *(_OWORD *)atoken.val = *a4;
      *(_OWORD *)&atoken.val[4] = v15;
      result = sub_100000B98(v14, (__int64)&atoken);
      if ( (_DWORD)result )
      {
        if ( !a5
          || (v16 = a4[1],
              *(_OWORD *)atoken.val = *a4,
              *(_OWORD *)&atoken.val[4] = v16,
              result = sandbox_check_by_audit_token(&atoken, "darwin-notification-post", 9LL),
              !(_DWORD)result) )
        {
          result = sub_100006D20(a1, a2, euidp, egidp);
          if ( (_DWORD)result != 7 && (_DWORD)result != 1 )
          {
            if ( (_DWORD)result )
              __assert_rtn(
                "_internal_notify_server_set_state_2",
                "notify_proc.c",
                1371,
                "status == NOTIFY_STATUS_OK || status == NOTIFY_STATUS_NOT_AUTHORIZED || status == NOTIFY_STATUS_INVALID_NAME");
            return sub_100004BF4(
                     7LL,
                     "__notify_server_set_state_2 %d %llu %llu [uid %d%s gid %d]\n",
                     (unsigned int)pidp,
                     a1,
                     a2,
                     euidp,
                     v11,
                     egidp);
          }
        }
      }
    }
  }
  return result;
}
