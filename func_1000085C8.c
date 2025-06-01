// Pseudocode for function at 0x1000085C8
__int64 __fastcall sub_1000085C8(__int64 a1, __int64 a2, char *a3, __int128 *a4, int a5)
{
  __int64 v9; // x0
  __int64 v10; // x21
  __int64 v11; // x8
  __int16 v12; // w3
  __int128 v13; // q1
  __int64 v14; // x0
  __int64 v15; // x20
  __int64 v16; // x0
  __int64 v17; // x21
  __int64 v18; // x10
  __int64 v19; // x0
  __int16 v20; // w8
  dispatch_source_s *v21; // x0
  __int64 handler[5]; // [xsp+8h] [xbp-78h] BYREF
  __int128 v24[2]; // [xsp+30h] [xbp-50h] BYREF

  ++qword_100014168;
  if ( !a3 )
    return 6LL;
  v9 = os_set_str_ptr_find(&unk_100014190, a1);
  v10 = 1LL;
  if ( v9 && qword_1000141A8 != v9 )
  {
    if ( a2 )
    {
      if ( *(_WORD *)(a2 + 76) )
      {
        v11 = *(_QWORD *)(qword_100014290 + 8LL * ((unsigned int)*(unsigned __int16 *)(a2 + 76) - 1));
        v10 = 6LL;
        if ( *(_DWORD *)v11 == 2 )
        {
          if ( !strcmp(a3, **(const char ***)(v11 + 8)) )
            return 0LL;
          else
            return 6LL;
        }
      }
      else
      {
        if ( a5 )
          v12 = a5;
        else
          v12 = 1023;
        v13 = a4[1];
        v24[0] = *a4;
        v24[1] = v13;
        v14 = sub_1000075A4(a3, v24, 0, v12);
        if ( v14 )
        {
          v15 = v14;
          *(_QWORD *)(v14 + 96) = *(_QWORD *)(a2 + 64);
          v16 = malloc_type_calloc(1LL, 16LL, 0x10800407411B482LL);
          if ( !v16 )
            __assert_rtn("service_open_path_private", "service.c", 195, "info != NULL");
          v17 = v16;
          *(_DWORD *)v16 = 2;
          *(_QWORD *)(v16 + 8) = v15;
          if ( word_100014304 )
          {
            if ( (unsigned __int16)word_100014304 == 0xFFFF )
              __assert_rtn("service_info_add", "service.c", 104, "global.service_info_count != UINT16_MAX");
            v18 = 0LL;
            while ( *(_QWORD *)(qword_100014290 + 8 * v18) )
            {
              if ( (unsigned __int16)word_100014304 == ++v18 )
              {
                v19 = malloc_type_realloc(qword_100014290, 8LL * (unsigned __int16)++word_100014304, 0x80040B8603338LL);
                goto LABEL_25;
              }
            }
            *(_QWORD *)(qword_100014290 + 8 * v18) = v16;
            v20 = v18 + 1;
          }
          else
          {
            word_100014304 = 1;
            v19 = malloc_type_malloc(8LL, 0x80040B8603338LL);
LABEL_25:
            qword_100014290 = v19;
            v20 = word_100014304;
            *(_QWORD *)(v19 + 8LL * (unsigned __int16)word_100014304 - 8) = v17;
          }
          *(_WORD *)(a2 + 76) = v20;
          v21 = *(dispatch_source_s **)(v15 + 72);
          handler[0] = (__int64)_NSConcreteStackBlock;
          handler[1] = 0x40000000LL;
          handler[2] = (__int64)sub_100008858;
          handler[3] = (__int64)&unk_1000109A0;
          handler[4] = v15;
          dispatch_source_set_event_handler(v21, handler);
          dispatch_activate(*(dispatch_object_t *)(v15 + 72));
          return 0LL;
        }
        else
        {
          return 53LL;
        }
      }
    }
    else
    {
      return 10LL;
    }
  }
  return v10;
}
