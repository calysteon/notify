// Pseudocode for function at 0x1000072C0
void sub_1000072C0()
{
  unsigned int v0; // w8
  unsigned __int64 v1; // x24
  __int64 v2; // x9
  __int64 v3; // x25
  int v4; // w10
  __int64 v5; // x0
  _QWORD *v6; // x11
  __int64 v7; // x12
  __int64 v9; // x0
  __int64 v10; // x20
  __int64 v11; // x9
  __int64 v12; // x8
  unsigned int v13; // w26
  __int64 v14; // x9
  __int64 v15; // x10
  unsigned int v16; // w10
  __int64 v17; // x11
  __int64 v18; // x0
  __int64 v19; // x19
  unsigned __int64 v20; // x8
  unsigned __int64 v21; // x24
  unsigned int v22; // w20
  __int64 v23; // x27
  __int64 block[5]; // [xsp+8h] [xbp-88h] BYREF

  v0 = dword_100014058;
  if ( dword_100014058 )
  {
    v1 = 0LL;
    v2 = qword_100014060;
    do
    {
      v3 = *(_QWORD *)(v2 + 8 * v1);
      if ( v3 )
      {
        v4 = *(_DWORD *)(v3 + 56);
        if ( v4 )
        {
          LODWORD(v5) = 0;
          v6 = *(_QWORD **)(v3 + 64);
          v7 = *(unsigned int *)(v3 + 56);
          do
          {
            if ( *v6++ )
              v5 = (unsigned int)(v5 + 1);
            else
              v5 = (unsigned int)v5;
            --v7;
          }
          while ( v7 );
          if ( (_DWORD)v5 != v4 )
          {
            if ( (_DWORD)v5 )
            {
              v9 = malloc_type_calloc(v5, 8LL, 0x2004093837F09LL);
              if ( !v9 )
                __assert_rtn("_vnode_sweep", "pathwatch.c", 515, "new_path_node != NULL");
              v10 = v9;
              v11 = *(unsigned int *)(v3 + 56);
              if ( (_DWORD)v11 )
              {
                v12 = 0LL;
                v13 = 0;
                v14 = 8 * v11;
                do
                {
                  v15 = *(_QWORD *)(*(_QWORD *)(v3 + 64) + v12);
                  if ( v15 )
                    *(_QWORD *)(v9 + 8LL * v13++) = v15;
                  v12 += 8LL;
                }
                while ( v14 != v12 );
              }
              else
              {
                v13 = 0;
              }
            }
            else
            {
              v13 = 0;
              v10 = 0LL;
            }
            free(*(void **)(v3 + 64));
            *(_QWORD *)(v3 + 64) = v10;
            *(_DWORD *)(v3 + 56) = v13;
            v2 = qword_100014060;
            v0 = dword_100014058;
          }
        }
      }
      ++v1;
    }
    while ( v1 < v0 );
    if ( v0 )
    {
      v16 = 0;
      v17 = v0;
      do
      {
        if ( *(_QWORD *)v2 && *(_DWORD *)(*(_QWORD *)v2 + 56LL) )
          ++v16;
        v2 += 8LL;
        --v17;
      }
      while ( v17 );
      if ( v16 != v0 )
      {
        if ( v16 )
        {
          v18 = malloc_type_calloc(v16, 8LL, 0x2004093837F09LL);
          if ( !v18 )
            __assert_rtn("_vnode_sweep", "pathwatch.c", 548, "new_source != NULL");
          v19 = v18;
          v20 = (unsigned int)dword_100014058;
          if ( dword_100014058 )
          {
            v21 = 0LL;
            v22 = 0;
            do
            {
              v23 = *(_QWORD *)(qword_100014060 + 8 * v21);
              if ( v23 )
              {
                if ( *(_DWORD *)(v23 + 56) )
                {
                  *(_QWORD *)(v19 + 8LL * v22++) = v23;
                }
                else
                {
                  dispatch_source_cancel(*(dispatch_source_t *)(v23 + 48));
                  block[0] = (__int64)_NSConcreteStackBlock;
                  block[1] = 0x40000000LL;
                  block[2] = (__int64)sub_10000754C;
                  block[3] = (__int64)&unk_100010900;
                  block[4] = v23;
                  dispatch_async((dispatch_queue_t)qword_100014298, block);
                  v20 = (unsigned int)dword_100014058;
                }
              }
              ++v21;
            }
            while ( v21 < v20 );
          }
          else
          {
            v22 = 0;
          }
        }
        else
        {
          v22 = 0;
          v19 = 0LL;
        }
        free((void *)qword_100014060);
        qword_100014060 = v19;
        dword_100014058 = v22;
      }
    }
  }
}
