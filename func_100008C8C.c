// Pseudocode for function at 0x100008C8C
__int64 (__fastcall *__fastcall sub_100008C8C(__int64 a1))()
{
  int v1; // w8

  v1 = *(_DWORD *)(a1 + 20);
  if ( (unsigned int)(v1 - 73) >= 0xFFFFFFF7 )
    return off_1000109C0[5 * (unsigned int)(v1 - 64) + 5];
  else
    return 0LL;
}
