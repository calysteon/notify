// Pseudocode for function at 0x100004CF4
bool __fastcall sub_100004CF4(_OWORD *a1, __int64 a2)
{
  __int128 v4; // q1
  __int64 v5; // x19
  void *v6; // x0
  const char *v7; // x22
  void *v8; // x21
  bool value; // w20
  audit_token_t atoken; // [xsp+10h] [xbp-40h] BYREF

  v4 = a1[1];
  *(_OWORD *)atoken.val = *a1;
  *(_OWORD *)&atoken.val[4] = v4;
  v5 = audit_token_to_pid(&atoken);
  sub_100004BF4((FILE *)5, "-> has_root_entitlement (PID %d)\n", v5);
  v6 = (void *)xpc_copy_entitlement_for_token(a2, a1);
  v7 = "FAIL";
  if ( v6 )
  {
    v8 = v6;
    value = xpc_bool_get_value(v6);
    xpc_release(v8);
    if ( value )
      v7 = "OK";
  }
  else
  {
    value = 0;
  }
  sub_100004BF4((FILE *)5, "<- has_root_entitlement (PID %d) = %s\n", v5, v7);
  return value;
}
