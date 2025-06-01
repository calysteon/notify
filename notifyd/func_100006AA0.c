// Pseudocode for function at 0x100006AA0
__int64 __fastcall sub_100006AA0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // x19

  v3 = a1;
  if ( (unsigned int)sub_1000064E8(*(const char **)(a1 + 8), a2, a3, 2) )
    return 7LL;
  ++*(_DWORD *)(v3 + 60);
  while ( 1 )
  {
    v3 = *(_QWORD *)v3;
    if ( !v3 )
      break;
    sub_100006694(v3, 0LL, 0LL);
  }
  return 0LL;
}
