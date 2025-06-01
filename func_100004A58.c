// Pseudocode for function at 0x100004A58
bool __fastcall sub_100004A58(__int64 a1, __int64 a2)
{
  int *v2; // x21
  int v4; // w8
  int v5; // w0

  if ( !*(_WORD *)(a2 + 76) )
    return 1LL;
  v2 = *(int **)(qword_100014290 + 8LL * ((unsigned int)*(unsigned __int16 *)(a2 + 76) - 1));
  if ( !v2 )
    return 1LL;
  v4 = *v2;
  if ( !*v2 )
  {
    if ( (fprintf(*(FILE **)(a1 + 32), "Null service: %s\n", *(const char **)(*(_QWORD *)(a2 + 48) + 8LL)) & 0x80000000) != 0 )
      return 0LL;
    v4 = *v2;
  }
  if ( v4 == 1 )
    v5 = fprintf(*(FILE **)(a1 + 32), "Path Service: %s <- %s\n");
  else
    v5 = fprintf(*(FILE **)(a1 + 32), "Unknown service: %s (%u)\n");
  return (v5 & 0x80000000) == 0;
}
