// Pseudocode for function at 0x100002A48
FILE *__fastcall sub_100002A48(int a1, int a2)
{
  FILE *result; // x0
  __int64 v4; // x0
  FILE *v5; // x19
  FILE *v6; // x0
  FILE *v7; // x21
  int v8; // w0
  tm *v9; // x0
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x8
  unsigned __int64 v15; // x22
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x20
  __int64 v19; // x0
  __int64 *v20; // x22
  __int64 v21; // x8
  __int64 v22; // x25
  __int64 v23; // x27
  __int64 v24; // x28
  __int64 v25; // x26
  __int64 v26; // x21
  __int64 v27; // x24
  __int64 v28; // x23
  int v29; // w9
  unsigned int v30; // w10
  unsigned int v31; // w11
  unsigned int v32; // w12
  unsigned int v33; // w13
  unsigned int v34; // w14
  unsigned int v35; // w15
  unsigned int v36; // w16
  __int64 i; // x21
  __int64 v38; // x9
  const char *v39; // x8
  bool v40; // cc
  __int64 v41[5]; // [xsp+38h] [xbp-188h] BYREF
  __int64 v42[5]; // [xsp+60h] [xbp-160h] BYREF
  __int64 v43[5]; // [xsp+88h] [xbp-138h] BYREF
  __int64 v44; // [xsp+B0h] [xbp-110h] BYREF
  __int64 *v45; // [xsp+B8h] [xbp-108h]
  __int64 v46; // [xsp+C0h] [xbp-100h]
  int v47; // [xsp+C8h] [xbp-F8h]
  char v48[8]; // [xsp+D0h] [xbp-F0h] BYREF
  __int64 v49; // [xsp+D8h] [xbp-E8h]
  __int64 (__fastcall *v50)(); // [xsp+E0h] [xbp-E0h]
  void *v51; // [xsp+E8h] [xbp-D8h]
  __int64 *v52; // [xsp+F0h] [xbp-D0h]
  FILE *v53; // [xsp+F8h] [xbp-C8h]

  if ( (a2 & 0x80000000) != 0 )
  {
    result = (FILE *)qword_100014048;
    if ( !qword_100014048 )
    {
      v4 = getpid();
      asprintf((char **)&qword_100014048, "/var/run/notifyd_%u.status", v4);
      result = (FILE *)qword_100014048;
      if ( !qword_100014048 )
        return result;
    }
    unlink((const char *)result);
    result = fopen((const char *)qword_100014048, "w");
  }
  else
  {
    result = fdopen(a2, "w");
  }
  v5 = result;
  if ( result )
  {
    if ( (unsigned int)os_variant_has_internal_diagnostics("com.apple.notifyd") )
    {
      v6 = fopen("/var/run/notifyd_jetsam.log", "r");
      if ( v6 )
      {
        v7 = v6;
        while ( 1 )
        {
          v8 = fgetc(v7);
          if ( v8 == -1 )
            break;
          fputc(v8, v5);
        }
        fclose(v7);
      }
    }
    if ( a1 == 1 )
    {
      v44 = 0LL;
      v45 = &v44;
      v46 = 0x2000000000LL;
      v47 = 0;
      if ( (fprintf(v5, "--- GLOBALS ---\n") & 0x80000000) == 0
        && (fprintf(v5, "%u slots (current id %u)\n", (unsigned int)dword_1000142D8, (unsigned int)dword_1000142DC) & 0x80000000) == 0
        && (fprintf(v5, "%u log_cutoff (default %u)\n", (unsigned int)dword_1000142F8, (unsigned int)dword_1000142FC) & 0x80000000) == 0
        && (fprintf(v5, "\n") & 0x80000000) == 0
        && (fprintf(v5, "--- STATISTICS ---\n") & 0x80000000) == 0
        && (fprintf(v5, "post         %llu\n", qword_100014078) & 0x80000000) == 0
        && (fprintf(v5, "    id       %llu\n", qword_100014088) & 0x80000000) == 0
        && (fprintf(v5, "    name     %llu\n", qword_100014090) & 0x80000000) == 0
        && (fprintf(v5, "    fetch    %llu\n", qword_100014098) & 0x80000000) == 0
        && (fprintf(v5, "    no_op    %llu\n", qword_100014080) & 0x80000000) == 0
        && (fprintf(v5, "\n") & 0x80000000) == 0
        && (fprintf(v5, "register     %llu\n", (_QWORD)xmmword_1000140A0) & 0x80000000) == 0
        && (fprintf(v5, "    plain    %llu\n", *((_QWORD *)&xmmword_1000140A0 + 1)) & 0x80000000) == 0
        && (fprintf(v5, "    check    %llu\n", qword_1000140B0) & 0x80000000) == 0
        && (fprintf(v5, "    signal   %llu\n", qword_1000140B8) & 0x80000000) == 0
        && (fprintf(v5, "    file     %llu\n", qword_1000140C0) & 0x80000000) == 0
        && (fprintf(v5, "    port     %llu\n", qword_1000140C8) & 0x80000000) == 0
        && (fprintf(v5, "    event    %llu\n", qword_1000140D0) & 0x80000000) == 0
        && (fprintf(v5, "    common   %llu\n", qword_1000140D8) & 0x80000000) == 0
        && (fprintf(v5, "\n") & 0x80000000) == 0
        && (fprintf(v5, "check        %llu\n", qword_100014108) & 0x80000000) == 0
        && (fprintf(v5, "cancel       %llu\n", qword_1000140E0) & 0x80000000) == 0
        && (fprintf(v5, "cleanup      %llu\n", qword_100014170) & 0x80000000) == 0
        && (fprintf(v5, "regenerate   %llu\n", (_QWORD)xmmword_100014178) & 0x80000000) == 0
        && (fprintf(v5, "checkin      %llu\n", *((_QWORD *)&xmmword_100014178 + 1)) & 0x80000000) == 0
        && (fprintf(v5, "\n") & 0x80000000) == 0
        && (fprintf(v5, "suspend      %llu\n", qword_1000140E8) & 0x80000000) == 0
        && (fprintf(v5, "resume       %llu\n", qword_1000140F0) & 0x80000000) == 0
        && (fprintf(v5, "suspend_pid  %llu\n", qword_1000140F8) & 0x80000000) == 0
        && (fprintf(v5, "resume_pid   %llu\n", qword_100014100) & 0x80000000) == 0
        && (fprintf(v5, "\n") & 0x80000000) == 0
        && (fprintf(v5, "get_state    %llu\n", (_QWORD)xmmword_100014110) & 0x80000000) == 0
        && (fprintf(v5, "    id       %llu\n", qword_100014120) & 0x80000000) == 0
        && (fprintf(v5, "    client   %llu\n", *((_QWORD *)&xmmword_100014110 + 1)) & 0x80000000) == 0
        && (fprintf(v5, "    fetch    %llu\n", qword_100014128) & 0x80000000) == 0
        && (fprintf(v5, "\n") & 0x80000000) == 0
        && (fprintf(v5, "set_state    %llu\n", qword_100014130) & 0x80000000) == 0
        && (fprintf(v5, "    id       %llu\n", qword_100014140) & 0x80000000) == 0
        && (fprintf(v5, "    client   %llu\n", qword_100014138) & 0x80000000) == 0
        && (fprintf(v5, "    fetch    %llu\n", qword_100014148) & 0x80000000) == 0
        && (fprintf(v5, "\n") & 0x80000000) == 0
        && (fprintf(v5, "set_owner    %llu\n", qword_100014150) & 0x80000000) == 0
        && (fprintf(v5, "\n") & 0x80000000) == 0
        && (fprintf(v5, "set_access   %llu\n", qword_100014158) & 0x80000000) == 0
        && (fprintf(v5, "\n") & 0x80000000) == 0
        && (fprintf(v5, "monitor      %llu\n", qword_100014160) & 0x80000000) == 0
        && (fprintf(v5, "svc_path     %llu\n", qword_100014168) & 0x80000000) == 0 )
      {
        v9 = localtime(&qword_1000142D0);
        strftime(v48, 0x80uLL, "%a, %d %b %Y %T %z", v9);
        if ( (fprintf(v5, "last reset time was %s\n", v48) & 0x80000000) == 0
          && (fprintf(v5, "\n") & 0x80000000) == 0
          && (fprintf(
                v5,
                "name         alloc %9u   free %9u   extant %9u\n",
                (unsigned int)dword_100014268,
                (unsigned int)dword_10001426C,
                (unsigned int)(dword_100014268 - dword_10001426C)) & 0x80000000) == 0
          && (fprintf(
                v5,
                "subscription alloc %9u   free %9u   extant %9u\n",
                (unsigned int)dword_100014270,
                (unsigned int)dword_100014274,
                (unsigned int)(dword_100014270 - dword_100014274)) & 0x80000000) == 0
          && (fprintf(
                v5,
                "portproc     alloc %9u   free %9u   extant %9u\n",
                (unsigned int)dword_100014278,
                (unsigned int)dword_10001427C,
                (unsigned int)(dword_100014278 - dword_10001427C)) & 0x80000000) == 0
          && (fprintf(v5, "\n") & 0x80000000) == 0 )
        {
          v10 = os_set_32_ptr_count(&unk_1000141F0);
          if ( (fprintf(v5, "port count   %u\n", v10) & 0x80000000) == 0 )
          {
            v11 = os_set_32_ptr_count(&unk_100014210);
            if ( (fprintf(v5, "proc count   %u\n", v11) & 0x80000000) == 0
              && (fprintf(v5, "\n") & 0x80000000) == 0
              && (fprintf(v5, "--- NAME TABLE ---\n") & 0x80000000) == 0 )
            {
              *(_QWORD *)v48 = _NSConcreteStackBlock;
              v49 = 1107296256LL;
              v50 = sub_10000410C;
              v51 = &unk_100010788;
              v52 = &v44;
              v53 = v5;
              sub_1000006F8((__int64)v48);
              v12 = os_set_str_ptr_count(&unk_100014190);
              if ( (fprintf(v5, "--- NAME COUNT %u ---\n", v12) & 0x80000000) == 0
                && (fprintf(v5, "\n") & 0x80000000) == 0
                && (fprintf(v5, "--- SUBSCRIPTION TABLE ---\n") & 0x80000000) == 0 )
              {
                v43[0] = (__int64)_NSConcreteStackBlock;
                v43[1] = 0x40000000LL;
                v43[2] = (__int64)sub_10000444C;
                v43[3] = (__int64)&unk_1000107B8;
                v43[4] = (__int64)v5;
                sub_1000007A8((__int64)v43);
                v13 = os_set_64_ptr_count(&unk_1000141D0);
                if ( (fprintf(v5, "--- SUBSCRIPTION COUNT %u ---\n", v13) & 0x80000000) == 0
                  && (fprintf(v5, "\n") & 0x80000000) == 0
                  && (fprintf(v5, "--- CONTROLLED NAME ---\n") & 0x80000000) == 0 )
                {
                  v14 = (unsigned int)dword_10001425C;
                  if ( dword_10001425C )
                  {
                    v15 = 0LL;
                    do
                    {
                      if ( (fprintf(
                              v5,
                              "%s %u %u %03x\n",
                              *(const char **)(*(_QWORD *)(qword_100014248 + 8 * v15) + 8LL),
                              *(unsigned int *)(*(_QWORD *)(qword_100014248 + 8 * v15) + 40LL),
                              *(unsigned int *)(*(_QWORD *)(qword_100014248 + 8 * v15) + 44LL),
                              *(unsigned int *)(*(_QWORD *)(qword_100014248 + 8 * v15) + 48LL)) & 0x80000000) != 0 )
                        goto LABEL_158;
                      ++v15;
                      v14 = (unsigned int)dword_10001425C;
                    }
                    while ( v15 < (unsigned int)dword_10001425C );
                  }
                  if ( (fprintf(v5, "--- CONTROLLED NAME COUNT %u ---\n", v14) & 0x80000000) == 0
                    && (fprintf(v5, "\n") & 0x80000000) == 0
                    && (fprintf(v5, "--- PUBLIC SERVICE ---\n") & 0x80000000) == 0 )
                  {
                    v42[0] = (__int64)_NSConcreteStackBlock;
                    v42[1] = 0x40000000LL;
                    v42[2] = (__int64)sub_100004488;
                    v42[3] = (__int64)&unk_1000107D8;
                    v42[4] = (__int64)v5;
                    sub_1000007A8((__int64)v42);
                    v16 = os_set_str_ptr_count(&unk_100014190);
                    if ( (fprintf(v5, "--- PUBLIC SERVICE COUNT %u ---\n", v16) & 0x80000000) == 0
                      && (fprintf(v5, "\n") & 0x80000000) == 0
                      && (fprintf(v5, "--- PRIVATE SERVICE ---\n") & 0x80000000) == 0 )
                    {
                      v41[0] = (__int64)_NSConcreteStackBlock;
                      v41[1] = 0x40000000LL;
                      v41[2] = (__int64)sub_10000455C;
                      v41[3] = (__int64)&unk_1000107F8;
                      v41[4] = (__int64)v5;
                      sub_1000007A8((__int64)v41);
                      v17 = os_set_64_ptr_count(&unk_1000141D0);
                      if ( (fprintf(v5, "--- PRIVATE SERVICE COUNT %u ---\n", v17) & 0x80000000) == 0
                        && (fprintf(v5, "\n") & 0x80000000) == 0
                        && (fprintf(v5, "--- PROCESSES ---\n") & 0x80000000) == 0 )
                      {
                        if ( (v45[3] & 0x80000000) != 0 )
                        {
LABEL_157:
                          fwrite("-- END --\n", 0xAuLL, 1uLL, v5);
                          goto LABEL_158;
                        }
                        v18 = 0LL;
                        while ( 1 )
                        {
                          v19 = os_set_32_ptr_find(&unk_100014210);
                          if ( v19 )
                          {
                            v20 = (__int64 *)(v19 - qword_100014228);
                            if ( v19 != qword_100014228 )
                            {
                              v21 = *v20;
                              if ( *v20 )
                              {
                                LODWORD(v22) = 0;
                                LODWORD(v23) = 0;
                                LODWORD(v24) = 0;
                                LODWORD(v25) = 0;
                                LODWORD(v26) = 0;
                                LODWORD(v27) = 0;
                                LODWORD(v28) = 0;
                                do
                                {
                                  v29 = *(_BYTE *)(v21 + 79) & 0xF;
                                  if ( v29 == 7 )
                                    v30 = v22 + 1;
                                  else
                                    v30 = v22;
                                  if ( v29 == 6 )
                                  {
                                    v30 = v22;
                                    v31 = v23 + 1;
                                  }
                                  else
                                  {
                                    v31 = v23;
                                  }
                                  if ( v29 == 5 )
                                    v32 = v24 + 1;
                                  else
                                    v32 = v24;
                                  if ( v29 == 4 )
                                  {
                                    v32 = v24;
                                    v33 = v26 + 1;
                                  }
                                  else
                                  {
                                    v33 = v26;
                                  }
                                  if ( (*(_BYTE *)(v21 + 79) & 0xFu) <= 5 )
                                  {
                                    v31 = v23;
                                    v30 = v22;
                                  }
                                  else
                                  {
                                    v33 = v26;
                                    v32 = v24;
                                  }
                                  if ( v29 == 3 )
                                    v34 = v25 + 1;
                                  else
                                    v34 = v25;
                                  if ( v29 == 2 )
                                  {
                                    v34 = v25;
                                    v35 = v27 + 1;
                                  }
                                  else
                                  {
                                    v35 = v27;
                                  }
                                  if ( v29 == 1 )
                                  {
                                    v35 = v27;
                                    v36 = v28 + 1;
                                  }
                                  else
                                  {
                                    v36 = v28;
                                  }
                                  if ( v29 == 1 )
                                    v34 = v25;
                                  if ( (*(_BYTE *)(v21 + 79) & 0xFu) <= 3 )
                                    v28 = v36;
                                  else
                                    v28 = (unsigned int)v28;
                                  if ( (*(_BYTE *)(v21 + 79) & 0xFu) <= 3 )
                                    v27 = v35;
                                  else
                                    v27 = (unsigned int)v27;
                                  if ( (*(_BYTE *)(v21 + 79) & 0xFu) <= 3 )
                                    v26 = (unsigned int)v26;
                                  else
                                    v26 = v33;
                                  if ( (*(_BYTE *)(v21 + 79) & 0xFu) <= 3 )
                                    v25 = v34;
                                  else
                                    v25 = (unsigned int)v25;
                                  if ( (*(_BYTE *)(v21 + 79) & 0xFu) <= 3 )
                                    v24 = (unsigned int)v24;
                                  else
                                    v24 = v32;
                                  if ( (*(_BYTE *)(v21 + 79) & 0xFu) <= 3 )
                                    v23 = (unsigned int)v23;
                                  else
                                    v23 = v31;
                                  if ( (*(_BYTE *)(v21 + 79) & 0xFu) <= 3 )
                                    v22 = (unsigned int)v22;
                                  else
                                    v22 = v30;
                                  v21 = *(_QWORD *)(v21 + 16);
                                }
                                while ( v21 );
                              }
                              else
                              {
                                v28 = 0LL;
                                v27 = 0LL;
                                v26 = 0LL;
                                v25 = 0LL;
                                v24 = 0LL;
                                v23 = 0LL;
                                v22 = 0LL;
                              }
                              if ( (fprintf(v5, "pid: %u   ", v18) & 0x80000000) != 0
                                || (fprintf(
                                      v5,
                                      "memory %u   plain %u   port %u   file %u   signal %u   event %u   common %u\n",
                                      v28,
                                      v27,
                                      v25,
                                      v26,
                                      v24,
                                      v23,
                                      v22) & 0x80000000) != 0 )
                              {
                                break;
                              }
                              for ( i = *v20; i; i = *(_QWORD *)(i + 16) )
                              {
                                v38 = *(_BYTE *)(i + 79) & 0xF;
                                v39 = "unknown";
                                if ( (unsigned int)v38 <= 7 )
                                  v39 = (&off_100010880)[v38];
                                if ( (fprintf(v5, "  %s: %s\n", v39, *(const char **)(*(_QWORD *)(i + 48) + 8LL)) & 0x80000000) != 0 )
                                  goto LABEL_158;
                              }
                              if ( (fprintf(v5, "\n") & 0x80000000) != 0 )
                                break;
                            }
                          }
                          v40 = (int)v18 < *((_DWORD *)v45 + 6);
                          v18 = (unsigned int)(v18 + 1);
                          if ( !v40 )
                            goto LABEL_157;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_158:
      _Block_object_dispose(&v44, 8);
    }
    else if ( !a1 )
    {
      sub_10000375C(v5);
    }
    return (FILE *)fclose(v5);
  }
  return result;
}
