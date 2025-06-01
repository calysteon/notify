// Pseudocode for function at 0x10000B2A0
__int64 (__fastcall *__fastcall sub_10000B2A0(__int64 a1))()
{
  int v1; // w8

  v1 = *(_DWORD *)(a1 + 20);
  if ( (unsigned int)(v1 - 1033) >= 0xFFFFFFDF )
    return off_100010B48[5 * (unsigned int)(v1 - 1000) + 5];
  else
    return 0LL;
}
