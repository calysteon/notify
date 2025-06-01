// Pseudocode for function at 0x10000268C
__int64 __fastcall sub_10000268C(__int64 a1, _OWORD *a2)
{
  __int128 v4; // q1
  __int128 v5; // q1
  __int128 v6; // q1
  __int64 v7; // x20
  __int64 result; // x0
  audit_token_t atoken; // [xsp+10h] [xbp-30h] BYREF

  v4 = a2[1];
  *(_OWORD *)atoken.val = *a2;
  *(_OWORD *)&atoken.val[4] = v4;
  if ( audit_token_to_euid(&atoken) )
    return mach_port_deallocate(mach_task_self_, a1);
  v5 = a2[1];
  *(_OWORD *)atoken.val = *a2;
  *(_OWORD *)&atoken.val[4] = v5;
  if ( (unsigned int)sandbox_check_by_audit_token(&atoken, "forbidden-remote-device-admin", 0LL) )
    return mach_port_deallocate(mach_task_self_, a1);
  v6 = a2[1];
  *(_OWORD *)atoken.val = *a2;
  *(_OWORD *)&atoken.val[4] = v6;
  if ( (sub_100004CF4(&atoken, "com.apple.private.libnotify.statecapture") & 1) == 0 )
    return mach_port_deallocate(mach_task_self_, a1);
  v7 = fileport_makefd(a1);
  result = mach_port_deallocate(mach_task_self_, a1);
  if ( (v7 & 0x80000000) == 0 )
  {
    if ( (fcntl_NOCANCEL(v7, 3LL) & 0x80000000) == 0 && (fcntl_NOCANCEL(v7, 4LL) & 0x80000000) == 0 )
      sub_100002A48(0LL, v7);
    return close_NOCANCEL(v7);
  }
  return result;
}
