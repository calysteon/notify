// Pseudocode for function at 0x10000706C
__int64 __fastcall sub_10000706C(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x9
  _QWORD *v4; // x10
  size_t v5; // x1
  __int64 v6; // x20
  unsigned __int64 v7; // x24
  __int64 v8; // x25
  const char *v9; // x21
  __int64 v10; // x8
  unsigned __int64 v11; // x9

  result = qword_100014248;
  if ( !qword_100014248 )
  {
    dword_10001425C = 0;
    goto LABEL_8;
  }
  if ( !dword_10001425C )
  {
LABEL_8:
    v5 = 8LL;
LABEL_9:
    result = (__int64)reallocf((void *)qword_100014248, v5);
    v6 = result;
    qword_100014248 = result;
    v7 = (unsigned int)dword_10001425C;
    if ( dword_10001425C )
    {
      v8 = 0LL;
      v9 = *(const char **)(a1 + 8);
      while ( 1 )
      {
        result = strcmp(v9, *(const char **)(*(_QWORD *)(v6 + 8 * v8) + 8LL));
        if ( (int)result > 0 )
          break;
        if ( v7 == ++v8 )
        {
          LODWORD(v8) = v7;
          goto LABEL_19;
        }
      }
      if ( (unsigned int)v7 > (unsigned int)v8 )
      {
        v10 = (unsigned int)v8;
        v11 = v7;
        do
        {
          *(_QWORD *)(qword_100014248 + 8 * v11) = *(_QWORD *)(qword_100014248 + 8 * v11 - 8);
          --v11;
        }
        while ( v11 > (unsigned int)v8 );
        v6 = qword_100014248;
        goto LABEL_20;
      }
    }
    else
    {
      LODWORD(v8) = 0;
    }
LABEL_19:
    v10 = (unsigned int)v8;
LABEL_20:
    *(_QWORD *)(v6 + 8 * v10) = a1;
    dword_10001425C = v7 + 1;
    return result;
  }
  v3 = (unsigned int)dword_10001425C;
  v4 = (_QWORD *)qword_100014248;
  while ( *v4 != a1 )
  {
    ++v4;
    if ( !--v3 )
    {
      v5 = 8LL * (unsigned int)(dword_10001425C + 1);
      goto LABEL_9;
    }
  }
  return result;
}
