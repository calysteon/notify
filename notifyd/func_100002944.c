// Pseudocode for function at 0x100002944
const char *__fastcall sub_100002944(
        const char *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        unsigned __int64 a8,
        const char *a9,
        int a10,
        unsigned int a11,
        int *a12,
        _QWORD *a13,
        int *a14,
        __int128 *a15)
{
  __int128 v18; // q1
  __int128 v19; // q1
  __int128 v21; // q1
  __int128 v27; // [xsp+50h] [xbp-70h] BYREF
  __int128 v28; // [xsp+60h] [xbp-60h]

  v18 = a15[1];
  v27 = *a15;
  v28 = v18;
  if ( (unsigned int)sandbox_check_by_audit_token(&v27, "darwin-notification-post", 9LL) )
  {
    v19 = a15[1];
    v27 = *a15;
    v28 = v19;
    return sub_100002100(a1, a2, a3, a4, a5, a6, 0LL, 0LL, a9, a10, a11, a12, a13, a14, &v27);
  }
  else
  {
    v21 = a15[1];
    v27 = *a15;
    v28 = v21;
    return sub_100002100(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, &v27);
  }
}
