// Pseudocode for function at 0x100007894
void __fastcall sub_100007894(__int64 a1, int a2, const char **a3)
{
  dispatch_source_s *v6; // x0
  const char *v7; // x22
  int v8; // w23
  int v9; // w25
  __int128 v10; // q1
  __int128 v11; // q1
  int v12; // w8
  int v13; // w27
  int v14; // w26
  int v15; // w8
  int v16; // w8
  int v17; // w22
  int v18; // w9
  int v19; // w8
  int v20; // w10
  int v21; // w10
  __int64 v22; // x20
  dispatch_source_s *v23; // x0
  dispatch_time_t v24; // x0
  unsigned __int64 v25; // x0
  stat *v26; // x20
  __int64 v27; // x25
  size_t v28; // x0
  size_t v29; // x2
  const char *v30; // x22
  size_t v31; // x23
  size_t v32; // x0
  size_t v33; // x2
  char *v34; // x0
  __int64 v35; // x23
  __int64 v36; // x3
  char *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x22
  __int64 block[5]; // [xsp+8h] [xbp-958h] BYREF
  stat v42; // [xsp+30h] [xbp-930h] BYREF
  audit_token_t atoken; // [xsp+C0h] [xbp-8A0h] BYREF
  audit_token_t v44; // [xsp+E0h] [xbp-880h]
  stat v45; // [xsp+100h] [xbp-860h] BYREF
  char __str[1025]; // [xsp+507h] [xbp-459h] BYREF

  if ( !a1 )
    return;
  v6 = *(dispatch_source_s **)(a1 + 72);
  if ( v6 )
  {
    if ( dispatch_source_testcancel(v6) )
      return;
  }
  memset(&v42, 0, sizeof(v42));
  v7 = *(const char **)a1;
  v9 = *(_DWORD *)(a1 + 64);
  v8 = *(_DWORD *)(a1 + 68);
  v10 = *(_OWORD *)(a1 + 32);
  *(_OWORD *)v44.val = *(_OWORD *)(a1 + 16);
  *(_OWORD *)&v44.val[4] = v10;
  if ( v7 )
  {
    *(_DWORD *)(a1 + 64) = 0;
    if ( *v7 == 47 )
    {
      if ( v7[1] )
      {
        if ( (v8 & 0x20000000) == 0 )
        {
          v11 = *(_OWORD *)(a1 + 32);
          *(_OWORD *)atoken.val = *(_OWORD *)(a1 + 16);
          *(_OWORD *)&atoken.val[4] = v11;
          if ( (unsigned int)sandbox_check_by_audit_token(&atoken, "file-read-metadata", SANDBOX_CHECK_NO_REPORT | 1u) )
          {
LABEL_9:
            a2 |= 0x40u;
            goto LABEL_17;
          }
        }
        memset(&v45, 0, sizeof(v45));
        if ( lstat(v7, &v45) )
          goto LABEL_17;
        v12 = v45.st_mode & 0xF000;
        switch ( v12 )
        {
          case 16384:
            v14 = 0;
            v13 = 0;
            v15 = 3;
            goto LABEL_55;
          case 40960:
            v14 = 0;
            v15 = 2;
            v13 = 1;
            goto LABEL_55;
          case 32768:
            v13 = 0;
            v14 = 1;
            v15 = 1;
LABEL_55:
            *(_DWORD *)(a1 + 64) = v15;
            if ( (v8 & 0x20000000) != 0 )
              goto LABEL_17;
            atoken = v44;
            if ( !audit_token_to_euid(&atoken) )
              goto LABEL_17;
            bzero(__str, 0x401uLL);
            if ( !realpath_DARWIN_EXTSN(v7, __str)
              || qword_100014068 && !strncasecmp(__str, (const char *)qword_100014068, qword_100014070) )
            {
              goto LABEL_17;
            }
            if ( v14 )
            {
              atoken = v44;
              v35 = audit_token_to_euid(&atoken);
              atoken = v44;
              v36 = audit_token_to_egid(&atoken);
              v37 = (char *)v7;
              v38 = 0LL;
            }
            else
            {
              if ( !v13 )
              {
                snprintf(__str, 0x400uLL, "%s/.", v7);
                atoken = v44;
                v40 = audit_token_to_euid(&atoken);
                atoken = v44;
                v36 = audit_token_to_egid(&atoken);
                v37 = __str;
                v38 = 0LL;
                v39 = v40;
                goto LABEL_70;
              }
              atoken = v44;
              v35 = audit_token_to_euid(&atoken);
              atoken = v44;
              v36 = audit_token_to_egid(&atoken);
              v37 = (char *)v7;
              v38 = 1LL;
            }
            v39 = v35;
LABEL_70:
            if ( (unsigned int)sub_100007E34(v37, v38, v39, v36) != 2 )
              goto LABEL_17;
            *(_DWORD *)(a1 + 64) = 0;
            goto LABEL_9;
        }
        v16 = 4;
      }
      else
      {
        v16 = 3;
      }
      *(_DWORD *)(a1 + 64) = v16;
    }
  }
LABEL_17:
  if ( a3 )
  {
    if ( (a2 & 0x61) != 0 )
    {
      *(_DWORD *)(a1 + 64) = 0;
      v17 = a2 & 0x60 | 1;
    }
    else
    {
      v17 = 0;
    }
    if ( *a3 && *(_QWORD *)a1 && !strcmp(*a3, *(const char **)a1) )
      v17 |= a2;
    v18 = v17 | 0x80;
    v20 = *(_DWORD *)(a1 + 64);
    v19 = *(_DWORD *)(a1 + 68);
    if ( !v20 )
      v18 = 0;
    v21 = v17 | (v20 == 0);
    if ( v9 )
      v18 = v21;
    v22 = v19 & (unsigned int)v18 & 0x3FFLL;
    if ( v22 )
    {
      v23 = *(dispatch_source_s **)(a1 + 72);
      if ( (v19 & 0x10000000) == 0 )
      {
        *(_DWORD *)(a1 + 68) = v19 | 0x10000000;
        if ( v23 )
          dispatch_suspend(v23);
        v24 = dispatch_time(0LL, 100000000LL);
        ++*(_DWORD *)(a1 + 104);
        block[0] = (__int64)_NSConcreteStackBlock;
        block[1] = 0x40000000LL;
        block[2] = (__int64)sub_100007F8C;
        block[3] = (__int64)&unk_100010920;
        block[4] = a1;
        dispatch_after(v24, (dispatch_queue_t)qword_100014298, block);
        v23 = *(dispatch_source_s **)(a1 + 72);
      }
      if ( v23 )
        dispatch_source_merge_data(v23, v22);
    }
  }
  v25 = *(_QWORD *)(a1 + 8);
  if ( v25 <= 0x400 )
  {
    v26 = (stat *)malloc_type_malloc(v25, 16075645LL);
    if ( !v26 )
      __assert_rtn("_path_node_update", "pathwatch.c", 874, "buf != NULL");
  }
  else
  {
    v26 = &v45;
  }
  sub_10000725C(a1);
  sub_100007FD8(0LL, 0LL, a1);
  bzero(v26, *(_QWORD *)(a1 + 8));
  if ( *(_DWORD *)(a1 + 48) )
  {
    v27 = 0LL;
    while ( 1 )
    {
      v28 = strlen((const char *)v26);
      v29 = *(_QWORD *)(a1 + 8);
      if ( v28 + 1 > v29 )
        __assert_rtn("_path_node_update", "pathwatch.c", 885, "(strlen(buf) + 1) <= pnode->plen");
      strlcat((char *)v26, "/", v29);
      v30 = *(const char **)(*(_QWORD *)(a1 + 56) + 8 * v27);
      if ( !v30 )
        __assert_rtn("_path_node_update", "pathwatch.c", 888, "pnode->pname[i] != NULL");
      v31 = strlen((const char *)v26);
      v32 = strlen(v30);
      v33 = *(_QWORD *)(a1 + 8);
      if ( v32 + v31 > v33 )
        __assert_rtn("_path_node_update", "pathwatch.c", 889, "(strlen(buf) + strlen(pnode->pname[i])) <= pnode->plen");
      strlcat((char *)v26, v30, v33);
      memset(&v42, 0, sizeof(v42));
      if ( (lstat((const char *)v26, &v42) & 0x80000000) != 0 )
        goto LABEL_50;
      v34 = (char *)v26;
      if ( (v42.st_mode & 0xF000) != 40960 )
        goto LABEL_48;
      sub_100007FD8(v26, 1LL, a1);
      if ( realpath_DARWIN_EXTSN((const char *)v26, __str) )
        break;
LABEL_49:
      if ( ++v27 >= (unsigned __int64)*(unsigned int *)(a1 + 48) )
        goto LABEL_50;
    }
    v34 = __str;
LABEL_48:
    sub_100007FD8(v34, 0LL, a1);
    goto LABEL_49;
  }
LABEL_50:
  sub_1000072C0();
  if ( v26 != &v45 )
    free(v26);
}
