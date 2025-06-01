// Pseudocode for function at 0x1000028A8
int64x2_t __fastcall sub_1000028A8(const char *a1, int a2, __int128 *a3)
{
  __int128 v6; // q1
  int64x2_t result; // q0
  __int128 v8; // q1
  __int128 v9; // [xsp+10h] [xbp-50h] BYREF
  __int128 v10; // [xsp+20h] [xbp-40h]
  int v11; // [xsp+34h] [xbp-2Ch] BYREF
  __int64 v12; // [xsp+38h] [xbp-28h] BYREF

  v6 = a3[1];
  v9 = *a3;
  v10 = v6;
  if ( !(unsigned int)sandbox_check_by_audit_token(&v9, "darwin-notification-post", 9LL) )
  {
    v8 = a3[1];
    v9 = *a3;
    v10 = v8;
    v12 = 0LL;
    sub_100000C94(a1, &v12, &v11, a2, &v9);
    result = vaddq_s64(*(int64x2_t *)&qword_100014090, (int64x2_t)xmmword_10000BCB0);
    *(int64x2_t *)&qword_100014090 = result;
  }
  return result;
}
