// Pseudocode for function at 0x10000725C
__int64 __fastcall sub_10000725C(__int64 result)
{
  __int64 v1; // x8
  __int64 v2; // x9
  __int64 v3; // x11
  __int64 v4; // x14
  __int64 v5; // x12
  __int64 v6; // x13
  __int64 v7; // x14

  v1 = (unsigned int)dword_100014058;
  if ( dword_100014058 )
  {
    v2 = 0LL;
    v3 = qword_100014060;
    do
    {
      v4 = *(_QWORD *)(v3 + 8 * v2);
      if ( v4 )
      {
        v5 = *(unsigned int *)(v4 + 56);
        if ( (_DWORD)v5 )
        {
          v6 = 0LL;
          v7 = *(_QWORD *)(v4 + 64);
          while ( *(_QWORD *)(v7 + 8 * v6) != result )
          {
            if ( v5 == ++v6 )
              goto LABEL_10;
          }
          *(_QWORD *)(v7 + 8 * v6) = 0LL;
          v3 = qword_100014060;
        }
      }
LABEL_10:
      ++v2;
    }
    while ( v2 != v1 );
  }
  return result;
}
