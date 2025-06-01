// Pseudocode for function at 0x100004B2C
__int64 __fastcall sub_100004B2C(__int64 a1, __int64 a2)
{
  const char ***v4; // x21
  __int64 v5; // x22
  int v6; // w8

  if ( !*(_WORD *)(a2 + 76) )
    return 1LL;
  v4 = *(const char ****)(qword_100014290 + 8LL * ((unsigned int)*(unsigned __int16 *)(a2 + 76) - 1));
  v5 = *(_QWORD *)(a2 + 48);
  v6 = *(_DWORD *)v4;
  if ( *(_DWORD *)v4 )
    goto LABEL_5;
  if ( (fprintf(*(FILE **)(a1 + 32), "PID %u Null service: %s\n", *(unsigned int *)(a2 + 68), *(const char **)(v5 + 8)) & 0x80000000) == 0 )
  {
    v6 = *(_DWORD *)v4;
LABEL_5:
    if ( v6 != 2
      || (fprintf(
            *(FILE **)(a1 + 32),
            "PID %u Path Service: %s <- %s\n",
            *(unsigned int *)(a2 + 68),
            *(const char **)(v5 + 8),
            *v4[1]) & 0x80000000) == 0 )
    {
      return 1LL;
    }
  }
  return 0LL;
}
