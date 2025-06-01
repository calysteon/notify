// Pseudocode for function at 0x100000E74
int64x2_t __fastcall sub_100000E74(const char *a1, int a2, __int128 *a3)
{
  __int128 v3; // q1
  int64x2_t result; // q0
  __int128 v5[2]; // [xsp+0h] [xbp-30h] BYREF
  int v6; // [xsp+24h] [xbp-Ch] BYREF
  __int64 v7; // [xsp+28h] [xbp-8h] BYREF

  v7 = 0LL;
  v3 = a3[1];
  v5[0] = *a3;
  v5[1] = v3;
  sub_100000C94(a1, &v7, &v6, a2, v5);
  result = vaddq_s64(*(int64x2_t *)&qword_100014090, (int64x2_t)xmmword_10000BCB0);
  *(int64x2_t *)&qword_100014090 = result;
  return result;
}
