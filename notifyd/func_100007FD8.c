// Pseudocode for function at 0x100007FD8
void __fastcall sub_100007FD8(const char *a1, int a2, __int64 a3)
{
  const char *v5; // x9
  const char *v6; // x24
  __int64 v7; // x21
  __int64 *v8; // x22
  __int64 v9; // x19
  __int64 v10; // x1
  __int64 v11; // x0
  __int64 v12; // x22
  dispatch_source_t v13; // x0
  dispatch_source_s *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x21
  char *v17; // x0
  _QWORD *v18; // x0
  __int64 v19; // x8
  __int64 v20[4]; // [xsp+10h] [xbp-130h] BYREF
  int v21; // [xsp+30h] [xbp-110h]
  __int64 handler[5]; // [xsp+38h] [xbp-108h] BYREF
  stat v23; // [xsp+60h] [xbp-E0h] BYREF
  __int64 anonymous0; // [xsp+148h] [xbp+8h]

  if ( a1 )
    v5 = a1;
  else
    v5 = "/";
  if ( *v5 )
    v6 = v5;
  else
    v6 = "/";
  v7 = (unsigned int)dword_100014058;
  if ( dword_100014058 )
  {
    v8 = (__int64 *)qword_100014060;
    while ( 1 )
    {
      v9 = *v8;
      if ( *v8 )
      {
        if ( *(_DWORD *)(v9 + 8) == a2 && !strcmp(v6, *(const char **)v9) )
          break;
      }
      ++v8;
      if ( !--v7 )
        goto LABEL_13;
    }
    if ( ((anonymous0 ^ (2 * anonymous0)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    sub_100008320(v9, a3);
  }
  else
  {
LABEL_13:
    if ( a2 == 1 )
      v10 = 2129920LL;
    else
      v10 = 0x8000LL;
    v11 = open_NOCANCEL(v6, v10);
    if ( (v11 & 0x80000000) == 0 )
    {
      v12 = v11;
      v13 = dispatch_source_create(
              (dispatch_source_type_t)&_dispatch_source_type_vnode,
              (unsigned int)v11,
              0x7FuLL,
              (dispatch_queue_t)qword_100014298);
      if ( v13 )
      {
        v14 = v13;
        v15 = malloc_type_calloc(1LL, 72LL, 0x10B004012F3CC1DLL);
        if ( !v15 )
          __assert_rtn("_vnode_create", "pathwatch.c", 430, "vnode != NULL");
        v16 = v15;
        *(_DWORD *)(v15 + 8) = a2;
        v17 = strdup(v6);
        *(_QWORD *)v16 = v17;
        if ( !v17 )
          __assert_rtn("_vnode_create", "pathwatch.c", 434, "vnode->path != NULL");
        *(_DWORD *)(v16 + 12) = v12;
        *(_QWORD *)(v16 + 48) = v14;
        memset(&v23, 0, sizeof(v23));
        if ( !fstat(v12, &v23) )
        {
          *(timespec *)(v16 + 16) = v23.st_mtimespec;
          *(timespec *)(v16 + 32) = v23.st_ctimespec;
        }
        sub_100008320(v16, a3);
        handler[0] = (__int64)_NSConcreteStackBlock;
        handler[1] = 0x40000000LL;
        handler[2] = (__int64)sub_1000083F8;
        handler[3] = (__int64)&unk_100010940;
        handler[4] = v16;
        dispatch_source_set_event_handler(v14, handler);
        v20[0] = (__int64)_NSConcreteStackBlock;
        v20[1] = 0x40000000LL;
        v20[2] = (__int64)sub_100008518;
        v20[3] = (__int64)&unk_100010960;
        v21 = v12;
        dispatch_source_set_cancel_handler(v14, v20);
        if ( dword_100014058 )
          v18 = reallocf((void *)qword_100014060, 8LL * (unsigned int)(dword_100014058 + 1));
        else
          v18 = (_QWORD *)malloc_type_calloc(1LL, 8LL, 0x2004093837F09LL);
        qword_100014060 = (__int64)v18;
        if ( !v18 )
          __assert_rtn("_vnode_create", "pathwatch.c", 460, "_global.vnode != NULL");
        v19 = (unsigned int)dword_100014058++;
        v18[v19] = v16;
        dispatch_resume(v14);
      }
      else
      {
        if ( ((anonymous0 ^ (2 * anonymous0)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        close_NOCANCEL(v12);
      }
    }
  }
}
