// Pseudocode for function at 0x100004F08
void __fastcall __noreturn start(int a1, __int64 a2)
{
  int v4; // w22
  char *v5; // x0
  char *v6; // x23
  int v7; // w27
  const char *v8; // x21
  int v9; // w8
  __int64 v10; // x26
  const char *v11; // x20
  const char *v12; // x24
  __int64 v13; // x0
  __int64 v14; // x0
  int v15; // w19
  __int64 v16; // x0
  int v17; // w20
  __int64 v18; // x0
  int *v19; // x0
  char *v20; // x0
  __int64 v21; // x20
  FILE *v22; // x19
  __int64 v23; // x0
  __int64 v24; // x21
  size_t v25; // x19
  void *v26; // x0
  void *v27; // x0
  __int64 v28; // x19
  __int64 v29; // x2
  FILE *v30; // x19
  FILE *v31; // x0
  unsigned int flags_low; // w8
  __int64 v33; // x26
  mach_port_options_t *v34; // x20
  __int64 v35; // x23
  __int64 v36; // x0
  void *v37; // x27
  __int64 v38; // x8
  __int64 v39; // x28
  char *v40; // x23
  unsigned __int64 v41; // x8
  unsigned __int64 v42; // x20
  const char *v44; // x23
  int v45; // w23
  __int64 v46; // x0
  __int64 v47; // x2
  __int64 v48; // x0
  __int64 v49; // x2
  __int64 v50; // x0
  int v51; // w27
  int v52; // w28
  int v53; // w20
  __int64 v54; // x23
  __int64 v55; // x0
  _DWORD *v56; // x0
  __int64 v57; // x23
  __int64 v58; // x0
  __int64 v59; // x0
  unsigned __int8 *v60; // x23
  int v61; // w8
  int v62; // w10
  kern_return_t v63; // w0
  __int64 v64; // x19
  dispatch_source_t v65; // x0
  dispatch_source_t v66; // x0
  dispatch_source_s *v67; // x0
  dispatch_time_t v68; // x0
  dispatch_source_s *v69; // x0
  int v70; // [xsp+2Ch] [xbp-554h]
  const char *v71; // [xsp+30h] [xbp-550h]
  const char *v72; // [xsp+38h] [xbp-548h]
  rlimit v73; // [xsp+40h] [xbp-540h] BYREF
  __int64 block[5]; // [xsp+50h] [xbp-530h] BYREF
  __int64 v75; // [xsp+78h] [xbp-508h] BYREF
  mach_port_options_t port_info[42]; // [xsp+80h] [xbp-500h] BYREF
  stat v77; // [xsp+480h] [xbp-100h] BYREF

  notify_set_options(0x8000000LL);
  os_trace_set_mode(256LL);
  if ( !sandbox_init("com.apple.notifyd", 1uLL, 0LL) )
  {
    v73 = (rlimit)xmmword_10000BCC0;
    setrlimit(8, &v73);
    signal(13, (void (__cdecl *)(int))1);
    signal(1, (void (__cdecl *)(int))1);
    signal(30, (void (__cdecl *)(int))1);
    signal(31, (void (__cdecl *)(int))1);
    signal(28, (void (__cdecl *)(int))1);
    *(_OWORD *)&qword_100014078 = 0u;
    *(_OWORD *)&qword_100014088 = 0u;
    *(_OWORD *)&qword_100014098 = 0u;
    *(__int128 *)((char *)&xmmword_1000140A0 + 8) = 0u;
    *(_OWORD *)&qword_1000140B8 = 0u;
    *(_OWORD *)&qword_1000140C8 = 0u;
    *(_OWORD *)&qword_1000140D8 = 0u;
    *(_OWORD *)&qword_1000140E8 = 0u;
    *(_OWORD *)&qword_1000140F8 = 0u;
    *(_OWORD *)&qword_100014108 = 0u;
    *(__int128 *)((char *)&xmmword_100014110 + 8) = 0u;
    *(_OWORD *)&qword_100014128 = 0u;
    *(_OWORD *)&qword_100014138 = 0u;
    *(_OWORD *)&qword_100014148 = 0u;
    *(_OWORD *)&qword_100014158 = 0u;
    *(_OWORD *)&qword_100014168 = 0u;
    xmmword_100014178 = 0u;
    v70 = getpagesize() >> 2;
    dword_1000142D8 = v70;
    dword_100014258 = 2;
    qword_100014260 = 0xFFFFFFFF00000000LL;
    os_set_str_ptr_init(&unk_100014190, 0LL, 1LL);
    qword_1000141A8 = 8LL;
    os_set_64_ptr_init(&unk_1000141B0, 0LL, 1LL);
    qword_1000141C8 = 16LL;
    os_set_64_ptr_init(&unk_1000141D0, 0LL, 1LL);
    qword_1000141E8 = 64LL;
    os_set_32_ptr_init(&unk_1000141F0, 0LL, 1LL);
    qword_100014208 = 8LL;
    os_set_32_ptr_init(&unk_100014210, 0LL, 1LL);
    qword_100014228 = 16LL;
    os_map_64_init(&unk_100014230, 0LL, 1LL);
    dword_100014300 = 1;
    v4 = 3;
    dword_1000142F8 = 3;
    v5 = strdup("/var/log/notifyd.log");
    qword_100014308 = (__int64)v5;
    dword_1000142DC = -1;
    if ( a1 >= 2 )
    {
      v6 = v5;
      v7 = 1;
      v71 = "apple.shm.notification_center";
      v72 = "com.apple.system.notification_center";
      while ( 1 )
      {
        v8 = *(const char **)(a2 + 8LL * v7);
        v9 = *(unsigned __int8 *)v8 - 45;
        if ( *v8 == 45 && (v9 = *((unsigned __int8 *)v8 + 1) - 100, v8[1] == 100) )
        {
          if ( v8[2] )
          {
LABEL_7:
            v10 = v7;
            if ( !strcmp(*(const char **)(a2 + 8LL * v7), "-log_cutoff") )
            {
              ++v7;
              dword_1000142F8 = atoi(*(const char **)(a2 + 8 * (v10 + 1)));
            }
            else if ( !strcmp(v8, "-log_file") )
            {
              free(v6);
              ++v7;
              v6 = strdup(*(const char **)(a2 + 8 * (v10 + 1)));
              qword_100014308 = (__int64)v6;
            }
            else if ( !strcmp(v8, "-service") )
            {
              ++v7;
              v72 = *(const char **)(a2 + 8 * (v10 + 1));
            }
            else if ( !strcmp(v8, "-shm") )
            {
              ++v7;
              v71 = *(const char **)(a2 + 8 * (v10 + 1));
            }
            else if ( !strcmp(v8, "-shm_pages") )
            {
              ++v7;
              dword_1000142D8 = atoi(*(const char **)(a2 + 8 * (v10 + 1))) * v70;
            }
            goto LABEL_19;
          }
        }
        else if ( v9 )
        {
          goto LABEL_7;
        }
        dword_1000142F8 = 7;
LABEL_19:
        if ( ++v7 >= a1 )
        {
          v4 = dword_1000142F8;
          v12 = v71;
          v11 = v72;
          goto LABEL_22;
        }
      }
    }
    v11 = "com.apple.system.notification_center";
    v12 = "apple.shm.notification_center";
LABEL_22:
    dword_1000142FC = v4;
    v13 = getpid();
    sub_100004BF4((FILE *)7, "--------------------\nnotifyd start PID %u\n", v13);
    v14 = bootstrap_check_in(bootstrap_port, v11, (mach_port_t *)&dword_10001428C);
    if ( !(_DWORD)v14 )
    {
      port_info[0].flags = 32;
      mach_port_set_attributes(mach_task_self_, dword_10001428C, 1, (mach_port_info_t)port_info, 4u);
      v15 = dword_1000142D8;
      if ( dword_1000142D8 )
      {
        v16 = shm_open(v12, 2, 420LL);
        v17 = v16;
        if ( (_DWORD)v16 == -1 )
        {
          v18 = shm_open(v12, 514, 420LL);
          if ( (_DWORD)v18 == -1 )
          {
            v19 = __error();
            v20 = strerror(*v19);
            snprintf((char *)port_info, 0x400uLL, "shm_open %s failed: %s\n", v12, v20);
            qword_100014010 = (__int64)port_info;
            sub_100004BF4((FILE *)5, "%s", (const char *)port_info);
            goto LABEL_35;
          }
          v24 = v18;
        }
        else
        {
          v24 = v16;
        }
        v25 = (unsigned int)(4 * v15);
        ftruncate(v24, v25);
        qword_1000142E0 = (__int64)mmap(0LL, v25, 3, 1, v24, 0LL);
        close_NOCANCEL(v24);
        if ( v17 != -1 )
        {
          v26 = (void *)malloc_type_malloc(v25, 3929788109LL);
          qword_1000142F0 = (__int64)v26;
          if ( v26 )
            memcpy(v26, (const void *)qword_1000142E0, v25);
        }
        bzero((void *)qword_1000142E0, v25);
        v27 = (void *)malloc_type_malloc(v25, 0x100004052888210LL);
        qword_1000142E8 = (__int64)v27;
        if ( !v27 )
LABEL_35:
          __assert_rtn("main", "notifyd.c", 1380, "status == 0");
        bzero(v27, v25);
        *(_DWORD *)qword_1000142E0 = getpid();
        *(_DWORD *)qword_1000142E8 = 1;
        dword_1000142DC = 0;
      }
      qword_100014298 = dispatch_workloop_create_inactive("com.apple.notifyd.main");
      dispatch_set_qos_class_fallback();
      dispatch_activate((dispatch_object_t)qword_100014298);
      memset(&v77, 0, sizeof(v77));
      v75 = 0LL;
      v28 = ((__int64)getpid() << 32) | 3;
      v29 = (unsigned int)dword_100014300++;
      sub_100006FDC("com.apple.system.notify.ipc_version", 0xFFFFFFFFLL, v29, 0xFFFFFFFFLL, 0LL, 0LL, &v75);
      sub_100006D20(v75, v28, 0LL, 0LL);
      v30 = (FILE *)"/etc/notify.conf";
      if ( stat("/etc/notify.conf", &v77) )
        goto LABEL_117;
      if ( v77.st_uid )
      {
        sub_100004BF4((FILE *)3, "config file %s not owned by root: ignored\n");
        goto LABEL_117;
      }
      if ( (v77.st_mode & 2) != 0 )
      {
        sub_100004BF4((FILE *)3, "config file %s is world-writable: ignored\n");
        goto LABEL_117;
      }
      v31 = fopen("/etc/notify.conf", "r");
      if ( !v31 )
        goto LABEL_117;
      v30 = v31;
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            do
            {
              if ( !fgets((char *)port_info, 1024, v30) )
              {
                while ( 1 )
                {
LABEL_126:
                  fclose(v30);
LABEL_117:
                  *(_OWORD *)&port_info[0].flags = *(_OWORD *)"!";
                  port_info[0].reserved[1] = 0LL;
                  v63 = mach_port_construct(
                          mach_task_self_,
                          port_info,
                          (mach_port_context_t)&qword_100014188,
                          (mach_port_name_t *)&dword_100014288);
                  if ( !v63 )
                  {
                    qword_100014280 = dispatch_mach_create_f(
                                        "com.apple.notifyd.mach-notifs",
                                        qword_100014298,
                                        0LL,
                                        sub_10000640C);
                    dispatch_set_qos_class_fallback();
                    qword_1000142A0 = dispatch_mach_create_f(
                                        "com.apple.notifyd.channel",
                                        qword_100014298,
                                        0LL,
                                        sub_1000063A4);
                    dispatch_set_qos_class_fallback();
                    v64 = xpc_event_publisher_create("com.apple.notifyd.matching", qword_100014298);
                    qword_100014250 = v64;
                    xpc_event_publisher_set_handler();
                    xpc_event_publisher_set_error_handler(v64, &stru_100010608);
                    xpc_event_publisher_set_throttling(v64, 64LL);
                    xpc_event_publisher_activate(v64);
                    v65 = dispatch_source_create(
                            (dispatch_source_type_t)&_dispatch_source_type_signal,
                            0x1EuLL,
                            0LL,
                            (dispatch_queue_t)qword_100014298);
                    qword_1000142A8 = (__int64)v65;
                    if ( v65 )
                    {
                      dispatch_set_context(v65, 0LL);
                      dispatch_source_set_event_handler_f(
                        (dispatch_source_t)qword_1000142A8,
                        (dispatch_function_t)sub_100006070);
                      dispatch_activate((dispatch_object_t)qword_1000142A8);
                      v66 = dispatch_source_create(
                              (dispatch_source_type_t)&_dispatch_source_type_signal,
                              0x1FuLL,
                              0LL,
                              (dispatch_queue_t)qword_100014298);
                      qword_1000142B0 = (__int64)v66;
                      if ( v66 )
                      {
                        dispatch_set_context(v66, (void *)1);
                        dispatch_source_set_event_handler_f(
                          (dispatch_source_t)qword_1000142B0,
                          (dispatch_function_t)sub_100006070);
                        dispatch_activate((dispatch_object_t)qword_1000142B0);
                        v67 = dispatch_source_create(
                                (dispatch_source_type_t)&_dispatch_source_type_signal,
                                0x1CuLL,
                                0LL,
                                (dispatch_queue_t)qword_100014298);
                        qword_1000142B8 = (__int64)v67;
                        if ( v67 )
                        {
                          dispatch_source_set_event_handler(v67, &stru_100010648);
                          dispatch_activate((dispatch_object_t)qword_1000142B8);
                          qword_1000142C0 = (__int64)dispatch_source_create(
                                                       (dispatch_source_type_t)&_dispatch_source_type_timer,
                                                       0LL,
                                                       0LL,
                                                       (dispatch_queue_t)qword_100014298);
                          v68 = dispatch_walltime(0LL, 0LL);
                          dispatch_source_set_timer((dispatch_source_t)qword_1000142C0, v68, 0x34630B8A000uLL, 0LL);
                          dispatch_source_set_event_handler((dispatch_source_t)qword_1000142C0, &stru_100010688);
                          dispatch_activate((dispatch_object_t)qword_1000142C0);
                          if ( (unsigned int)os_variant_has_internal_diagnostics("com.apple.notifyd") )
                          {
                            v69 = dispatch_source_create(
                                    (dispatch_source_type_t)&_dispatch_source_type_memorypressure,
                                    0LL,
                                    0x10uLL,
                                    (dispatch_queue_t)qword_100014298);
                            qword_1000142C8 = (__int64)v69;
                            if ( !v69 )
                              __assert_rtn("main", "notifyd.c", 1479, "global.memory_pressure_src != NULL");
                            dispatch_source_set_event_handler(v69, &stru_1000106C8);
                            dispatch_activate((dispatch_object_t)qword_1000142C8);
                          }
                          dispatch_async((dispatch_queue_t)qword_100014298, &stru_100010708);
                          dispatch_main();
                        }
                        __assert_rtn("main", "notifyd.c", 1458, "global.sig_winch_src != NULL");
                      }
                      __assert_rtn("main", "notifyd.c", 1450, "global.sig_usr2_src != NULL");
                    }
                    __assert_rtn("main", "notifyd.c", 1442, "global.sig_usr1_src != NULL");
                  }
                  qword_100014010 = (__int64)"BUG IN LIBNOTIFY: Unable to allocate Mach notification port";
                  qword_100014040 = v63;
                  __break(1u);
                }
              }
            }
            while ( !LOBYTE(port_info[0].flags) || LOBYTE(port_info[0].flags) == 35 );
            *((_BYTE *)port_info + strlen((const char *)port_info) - 1) = 0;
            flags_low = LOBYTE(port_info[0].flags);
            if ( !LOBYTE(port_info[0].flags) )
            {
              v33 = 0LL;
              goto LABEL_70;
            }
            v33 = 0LL;
            v34 = port_info;
            do
            {
              v35 = 0LL;
              while ( flags_low > 0x20 || ((1LL << flags_low) & 0x100000201LL) == 0 )
                flags_low = *((unsigned __int8 *)&v34->flags + ++v35);
              v36 = malloc_type_malloc((unsigned int)(v35 + 1), 2996170482LL);
              v37 = (void *)v36;
              if ( v35 )
              {
                v38 = 0LL;
                v39 = (unsigned int)v35;
                do
                {
                  *(_BYTE *)(v36 + v38) = *((_BYTE *)&v34->flags + v38);
                  ++v38;
                }
                while ( v35 != v38 );
              }
              else
              {
                v39 = 0LL;
              }
              *(_BYTE *)(v36 + v35) = 0;
              v33 = sub_100005C74(v36, v33);
              free(v37);
              v40 = (char *)v34 + v39;
              if ( !*((_BYTE *)&v34->flags + v39) )
                break;
              flags_low = *((unsigned __int8 *)&v34->flags + v39 + 1);
              if ( !*((_BYTE *)&v34->flags + v39 + 1) )
              {
                v33 = sub_100005C74(&unk_10000D701, v33);
                flags_low = (unsigned __int8)v40[1];
              }
              v34 = (mach_port_options_t *)(v40 + 1);
            }
            while ( flags_low );
            if ( !v33 )
              goto LABEL_70;
            v41 = 0LL;
            do
              v42 = v41;
            while ( *(_QWORD *)(v33 + 8 * v41++) );
            if ( !v42 )
              goto LABEL_70;
            v44 = *(const char **)v33;
            if ( strcasecmp(*(const char **)v33, "monitor") )
              break;
            if ( v42 <= 2 )
              goto LABEL_70;
            v46 = *(_QWORD *)(v33 + 8);
            v47 = (unsigned int)dword_100014300++;
            sub_100006FDC(v46, 0xFFFFFFFFLL, v47, 0xFFFFFFFFLL, 0LL, 0LL, &v75);
            block[0] = (__int64)_NSConcreteStackBlock;
            block[1] = 0x40000000LL;
            block[2] = (__int64)sub_100005D78;
            block[3] = (__int64)&unk_100010818;
            block[4] = v33;
            dispatch_async((dispatch_queue_t)qword_100014298, block);
          }
          if ( !strcasecmp(v44, "set") )
          {
            if ( v42 != 1 && v42 < 4 )
            {
              v48 = *(_QWORD *)(v33 + 8);
              v49 = (unsigned int)dword_100014300++;
              sub_100006FDC(v48, 0xFFFFFFFFLL, v49, 0xFFFFFFFFLL, 0LL, 0LL, &v75);
              if ( v42 == 3 )
              {
                v50 = atoll(*(const char **)(v33 + 16));
                sub_100006D20(v75, v50, 0LL, 0LL);
              }
            }
            goto LABEL_70;
          }
          if ( !strcasecmp(v44, "reserve") )
            break;
          v45 = strcasecmp(v44, "quit");
          sub_100005D20((void *)v33);
          if ( !v45 )
            goto LABEL_126;
        }
        if ( v42 == 1 )
          goto LABEL_70;
        if ( v42 < 3 )
        {
          v52 = 0;
          v51 = 0;
        }
        else
        {
          v51 = atoi(*(const char **)(v33 + 16));
          if ( v42 == 3 )
          {
            v52 = 0;
          }
          else
          {
            v52 = atoi(*(const char **)(v33 + 24));
            if ( v42 >= 5 )
            {
              v60 = *(unsigned __int8 **)(v33 + 32);
              if ( v60 && strlen(*(const char **)(v33 + 32)) == 6 )
              {
                v61 = *v60 == 114;
                if ( *v60 == 114 )
                  v62 = 3;
                else
                  v62 = 2;
                if ( v60[1] == 119 )
                  v61 = v62;
                if ( v60[2] == 114 )
                  v61 |= 0x10u;
                if ( v60[3] == 119 )
                  v61 |= 0x20u;
                if ( v60[4] == 114 )
                  v61 |= 0x100u;
                if ( v60[5] == 119 )
                  v53 = v61 | 0x200;
                else
                  v53 = v61;
              }
              else
              {
                v53 = 0;
              }
              goto LABEL_83;
            }
          }
        }
        v53 = 819;
LABEL_83:
        if ( v51 | v52 )
        {
          v54 = *(_QWORD *)(v33 + 8);
          if ( v54 )
          {
            v55 = os_set_str_ptr_find(&unk_100014190, *(_QWORD *)(v33 + 8));
            if ( v55 )
            {
              v56 = (_DWORD *)(v55 - qword_1000141A8);
              if ( v56 )
                goto LABEL_89;
            }
            v56 = (_DWORD *)sub_100006F0C(v54);
            if ( v56 )
            {
              ++v56[14];
LABEL_89:
              v56[10] = v51;
              v56[11] = v52;
              sub_10000706C();
            }
          }
        }
        if ( v53 != 819 )
        {
          v57 = *(_QWORD *)(v33 + 8);
          if ( v57 )
          {
            v58 = os_set_str_ptr_find(&unk_100014190, *(_QWORD *)(v33 + 8));
            if ( !v58 || (v59 = v58 - qword_1000141A8) == 0 )
            {
              v59 = sub_100006F0C(v57);
              if ( !v59 )
                goto LABEL_70;
              ++*(_DWORD *)(v59 + 56);
            }
            *(_DWORD *)(v59 + 48) = v53;
            sub_10000706C();
          }
        }
LABEL_70:
        sub_100005D20((void *)v33);
      }
    }
    v21 = v14;
    v22 = __stderrp;
    v23 = getpid();
    fprintf(v22, "%d bootstrap_check_in failed (%d)\n", v23, v21);
  }
  exit(1);
}
