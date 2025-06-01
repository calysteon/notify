// Pseudocode for function at 0x100008320
char *__fastcall sub_100008320(__int64 a1, __int64 a2)
{
  __int64 v4; // x8
  __int64 v5; // x9
  char *result; // x0
  __int64 v7; // x9
  __int64 v8; // x8
  char *v9; // x8

  v4 = *(unsigned int *)(a1 + 56);
  if ( (_DWORD)v4 )
  {
    v5 = 0LL;
    result = *(char **)(a1 + 64);
    while ( *(_QWORD *)&result[v5] != a2 )
    {
      v5 += 8LL;
      if ( 8 * v4 == v5 )
      {
        v7 = 0LL;
        while ( *(_QWORD *)&result[8 * v7] )
        {
          if ( v4 == ++v7 )
          {
            result = (char *)reallocf(result, 8LL * (unsigned int)(v4 + 1));
            goto LABEL_10;
          }
        }
        v9 = &result[8 * v7];
        goto LABEL_13;
      }
    }
  }
  else
  {
    result = (char *)malloc_type_calloc(1LL, 8LL, 0x2004093837F09LL);
LABEL_10:
    *(_QWORD *)(a1 + 64) = result;
    if ( !result )
      __assert_rtn("_vnode_add_pnode", "pathwatch.c", 319, "vnode->path_node != NULL");
    v8 = *(unsigned int *)(a1 + 56);
    *(_DWORD *)(a1 + 56) = v8 + 1;
    v9 = &result[8 * v8];
LABEL_13:
    *(_QWORD *)v9 = a2;
  }
  return result;
}
