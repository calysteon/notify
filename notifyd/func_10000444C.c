// Pseudocode for function at 0x10000444C
bool __fastcall sub_10000444C(__int64 a1, __int64 a2)
{
  return fprintf(*(FILE **)(a1 + 32), "%d\n", *(unsigned int *)(a2 + 68)) >= 0;
}
