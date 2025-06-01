// Pseudocode for function at 0x1000075A4
__int64 __fastcall sub_1000075A4(_BYTE *a1, _OWORD *a2, int a3, __int16 a4)
{
  dispatch_queue_s *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x23
  const char *v11; // x26
  int v12; // t1
  char *v13; // x25
  signed __int64 v14; // x28
  char *v15; // x0
  char *v16; // x27
  int v17; // w8
  _QWORD *v18; // x0
  __int64 v19; // x8
  int v20; // t1
  __int64 v21; // x0
  unsigned __int64 v22; // x25
  __int128 v23; // q1
  int v24; // w8

  v8 = (dispatch_queue_s *)qword_100014298;
  dispatch_assert_queue_V2((dispatch_queue_t)qword_100014298);
  if ( qword_100014050 != -1 )
    dispatch_once(&qword_100014050, &stru_1000108E0);
  if ( *a1 != 47 )
    return 0LL;
  v9 = malloc_type_calloc(1LL, 112LL, 0x10B0040DF2FFA84LL);
  if ( !v9 )
    __assert_rtn("_path_node_init", "pathwatch.c", 723, "pnode != NULL");
  v10 = v9;
  *(_QWORD *)(v9 + 8) = 1LL;
  v11 = a1 - 1;
  do
    v12 = *(unsigned __int8 *)++v11;
  while ( v12 == 47 );
  while ( 1 )
  {
    v13 = strchr(v11, 47);
    if ( !v13 )
      v13 = (char *)&v11[strlen(v11)];
    v14 = v13 - v11;
    if ( v13 == v11 )
      break;
    *(_QWORD *)(v10 + 8) += v14 + 1;
    if ( v13 )
    {
      v15 = (char *)malloc_type_malloc(v14 + 1, 1142205916LL);
      if ( !v15 )
        __assert_rtn("_path_node_init", "pathwatch.c", 747, "name != NULL");
      v16 = v15;
      if ( v11 )
        strncpy(v15, v11, v13 - v11);
      v16[v14] = 0;
    }
    else
    {
      v16 = strdup(v11);
    }
    v17 = *(_DWORD *)(v10 + 48);
    if ( v17 )
      v18 = reallocf(*(void **)(v10 + 56), 8LL * (unsigned int)(v17 + 1));
    else
      v18 = (_QWORD *)malloc_type_calloc(1LL, 8LL, 0x10040436913F5LL);
    *(_QWORD *)(v10 + 56) = v18;
    if ( !v18 )
      __assert_rtn("_path_node_init", "pathwatch.c", 763, "pnode->pname != NULL");
    v11 = 0LL;
    v19 = *(unsigned int *)(v10 + 48);
    v18[v19] = v16;
    *(_DWORD *)(v10 + 48) = v19 + 1;
    if ( v13 )
    {
      v11 = v13 - 1;
      do
        v20 = *(unsigned __int8 *)++v11;
      while ( v20 == 47 );
    }
  }
  v21 = malloc_type_calloc(1LL, *(_QWORD *)(v10 + 8), 2731481326LL);
  *(_QWORD *)v10 = v21;
  if ( !v21 )
    __assert_rtn("_path_node_init", "pathwatch.c", 776, "pnode->path != NULL");
  if ( *(_DWORD *)(v10 + 48) )
  {
    v22 = 0LL;
    do
    {
      strlcat(*(char **)v10, "/", *(_QWORD *)(v10 + 8));
      strlcat(*(char **)v10, *(const char **)(*(_QWORD *)(v10 + 56) + 8 * v22++), *(_QWORD *)(v10 + 8));
    }
    while ( v22 < *(unsigned int *)(v10 + 48) );
  }
  *(_DWORD *)(v10 + 104) = 1;
  v23 = a2[1];
  *(_OWORD *)(v10 + 16) = *a2;
  *(_OWORD *)(v10 + 32) = v23;
  sub_100007894(v10, 0LL, 0LL);
  *(_QWORD *)(v10 + 72) = dispatch_source_create((dispatch_source_type_t)&_dispatch_source_type_data_or, 0LL, 0LL, v8);
  v24 = a4 & 0x3FF;
  if ( a3 )
    v24 = a4 & 0x3FF | 0x20000000;
  *(_DWORD *)(v10 + 68) = v24;
  return v10;
}
