// Pseudocode for function at 0x100000B98
__int64 __fastcall sub_100000B98(const char *a1, __int64 a2)
{
  void *v5; // x0
  void *v6; // x20
  bool value; // w21
  char __dst[257]; // [xsp+17h] [xbp-129h] BYREF

  memcpy(__dst, "com.apple.private.darwin-notification.restrict-post.", sizeof(__dst));
  if ( strncmp(a1, "com.apple.private.restrict-post.", 0x20uLL) )
    return 1LL;
  if ( (unsigned __int64)__strlcat_chk(__dst, a1 + 32, 257LL, 257LL) <= 0x100 )
  {
    v5 = (void *)xpc_copy_entitlement_for_token(__dst, a2);
    if ( v5 )
    {
      v6 = v5;
      value = xpc_bool_get_value(v5);
      xpc_release(v6);
      if ( value )
        return 1LL;
    }
    sub_100004BF4(3LL, "Post %s rejected: missing entitlement\n");
  }
  else
  {
    sub_100004BF4(3LL, "Post %s rejected: respective restricted notification entitlement would be too long\n");
  }
  return 0LL;
}
