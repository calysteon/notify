// Pseudocode for function at 0x10000375C
size_t __fastcall sub_10000375C(FILE *a1)
{
  size_t result; // x0
  tm *v3; // x0
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 v6; // x0
  __int64 v7; // x8
  unsigned __int64 v8; // x22
  __int64 v9; // x0
  __int64 v10; // x0
  __int64 v11[5]; // [xsp+20h] [xbp-140h] BYREF
  __int64 v12[5]; // [xsp+48h] [xbp-118h] BYREF
  __int64 v13[5]; // [xsp+70h] [xbp-F0h] BYREF
  char v14[128]; // [xsp+98h] [xbp-C8h] BYREF

  result = fprintf(a1, "--- GLOBALS ---\n");
  if ( (result & 0x80000000) == 0 )
  {
    result = fprintf(a1, "%u slots (current id %u)\n", (unsigned int)dword_1000142D8, (unsigned int)dword_1000142DC);
    if ( (result & 0x80000000) == 0 )
    {
      result = fprintf(a1, "%u log_cutoff (default %u)\n", (unsigned int)dword_1000142F8, (unsigned int)dword_1000142FC);
      if ( (result & 0x80000000) == 0 )
      {
        result = fprintf(a1, "\n");
        if ( (result & 0x80000000) == 0 )
        {
          result = fprintf(a1, "--- STATISTICS ---\n");
          if ( (result & 0x80000000) == 0 )
          {
            result = fprintf(a1, "post         %llu\n", qword_100014078);
            if ( (result & 0x80000000) == 0 )
            {
              result = fprintf(a1, "    id       %llu\n", qword_100014088);
              if ( (result & 0x80000000) == 0 )
              {
                result = fprintf(a1, "    name     %llu\n", qword_100014090);
                if ( (result & 0x80000000) == 0 )
                {
                  result = fprintf(a1, "    fetch    %llu\n", qword_100014098);
                  if ( (result & 0x80000000) == 0 )
                  {
                    result = fprintf(a1, "    no_op    %llu\n", qword_100014080);
                    if ( (result & 0x80000000) == 0 )
                    {
                      result = fprintf(a1, "\n");
                      if ( (result & 0x80000000) == 0 )
                      {
                        result = fprintf(a1, "register     %llu\n", (_QWORD)xmmword_1000140A0);
                        if ( (result & 0x80000000) == 0 )
                        {
                          result = fprintf(a1, "    plain    %llu\n", *((_QWORD *)&xmmword_1000140A0 + 1));
                          if ( (result & 0x80000000) == 0 )
                          {
                            result = fprintf(a1, "    check    %llu\n", qword_1000140B0);
                            if ( (result & 0x80000000) == 0 )
                            {
                              result = fprintf(a1, "    signal   %llu\n", qword_1000140B8);
                              if ( (result & 0x80000000) == 0 )
                              {
                                result = fprintf(a1, "    file     %llu\n", qword_1000140C0);
                                if ( (result & 0x80000000) == 0 )
                                {
                                  result = fprintf(a1, "    port     %llu\n", qword_1000140C8);
                                  if ( (result & 0x80000000) == 0 )
                                  {
                                    result = fprintf(a1, "    event    %llu\n", qword_1000140D0);
                                    if ( (result & 0x80000000) == 0 )
                                    {
                                      result = fprintf(a1, "    common   %llu\n", qword_1000140D8);
                                      if ( (result & 0x80000000) == 0 )
                                      {
                                        result = fprintf(a1, "\n");
                                        if ( (result & 0x80000000) == 0 )
                                        {
                                          result = fprintf(a1, "check        %llu\n", qword_100014108);
                                          if ( (result & 0x80000000) == 0 )
                                          {
                                            result = fprintf(a1, "cancel       %llu\n", qword_1000140E0);
                                            if ( (result & 0x80000000) == 0 )
                                            {
                                              result = fprintf(a1, "cleanup      %llu\n", qword_100014170);
                                              if ( (result & 0x80000000) == 0 )
                                              {
                                                result = fprintf(a1, "regenerate   %llu\n", (_QWORD)xmmword_100014178);
                                                if ( (result & 0x80000000) == 0 )
                                                {
                                                  result = fprintf(
                                                             a1,
                                                             "checkin      %llu\n",
                                                             *((_QWORD *)&xmmword_100014178 + 1));
                                                  if ( (result & 0x80000000) == 0 )
                                                  {
                                                    result = fprintf(a1, "\n");
                                                    if ( (result & 0x80000000) == 0 )
                                                    {
                                                      result = fprintf(a1, "suspend      %llu\n", qword_1000140E8);
                                                      if ( (result & 0x80000000) == 0 )
                                                      {
                                                        result = fprintf(a1, "resume       %llu\n", qword_1000140F0);
                                                        if ( (result & 0x80000000) == 0 )
                                                        {
                                                          result = fprintf(a1, "suspend_pid  %llu\n", qword_1000140F8);
                                                          if ( (result & 0x80000000) == 0 )
                                                          {
                                                            result = fprintf(a1, "resume_pid   %llu\n", qword_100014100);
                                                            if ( (result & 0x80000000) == 0 )
                                                            {
                                                              result = fprintf(a1, "\n");
                                                              if ( (result & 0x80000000) == 0 )
                                                              {
                                                                result = fprintf(
                                                                           a1,
                                                                           "get_state    %llu\n",
                                                                           (_QWORD)xmmword_100014110);
                                                                if ( (result & 0x80000000) == 0 )
                                                                {
                                                                  result = fprintf(
                                                                             a1,
                                                                             "    id       %llu\n",
                                                                             qword_100014120);
                                                                  if ( (result & 0x80000000) == 0 )
                                                                  {
                                                                    result = fprintf(
                                                                               a1,
                                                                               "    client   %llu\n",
                                                                               *((_QWORD *)&xmmword_100014110 + 1));
                                                                    if ( (result & 0x80000000) == 0 )
                                                                    {
                                                                      result = fprintf(
                                                                                 a1,
                                                                                 "    fetch    %llu\n",
                                                                                 qword_100014128);
                                                                      if ( (result & 0x80000000) == 0 )
                                                                      {
                                                                        result = fprintf(a1, "\n");
                                                                        if ( (result & 0x80000000) == 0 )
                                                                        {
                                                                          result = fprintf(
                                                                                     a1,
                                                                                     "set_state    %llu\n",
                                                                                     qword_100014130);
                                                                          if ( (result & 0x80000000) == 0 )
                                                                          {
                                                                            result = fprintf(
                                                                                       a1,
                                                                                       "    id       %llu\n",
                                                                                       qword_100014140);
                                                                            if ( (result & 0x80000000) == 0 )
                                                                            {
                                                                              result = fprintf(
                                                                                         a1,
                                                                                         "    client   %llu\n",
                                                                                         qword_100014138);
                                                                              if ( (result & 0x80000000) == 0 )
                                                                              {
                                                                                result = fprintf(
                                                                                           a1,
                                                                                           "    fetch    %llu\n",
                                                                                           qword_100014148);
                                                                                if ( (result & 0x80000000) == 0 )
                                                                                {
                                                                                  result = fprintf(a1, "\n");
                                                                                  if ( (result & 0x80000000) == 0 )
                                                                                  {
                                                                                    result = fprintf(
                                                                                               a1,
                                                                                               "set_owner    %llu\n",
                                                                                               qword_100014150);
                                                                                    if ( (result & 0x80000000) == 0 )
                                                                                    {
                                                                                      result = fprintf(a1, "\n");
                                                                                      if ( (result & 0x80000000) == 0 )
                                                                                      {
                                                                                        result = fprintf(
                                                                                                   a1,
                                                                                                   "set_access   %llu\n",
                                                                                                   qword_100014158);
                                                                                        if ( (result & 0x80000000) == 0 )
                                                                                        {
                                                                                          result = fprintf(a1, "\n");
                                                                                          if ( (result & 0x80000000) == 0 )
                                                                                          {
                                                                                            result = fprintf(a1, "monitor      %llu\n", qword_100014160);
                                                                                            if ( (result & 0x80000000) == 0 )
                                                                                            {
                                                                                              result = fprintf(a1, "svc_path     %llu\n", qword_100014168);
                                                                                              if ( (result & 0x80000000) == 0 )
                                                                                              {
                                                                                                v3 = localtime(&qword_1000142D0);
                                                                                                strftime(
                                                                                                  v14,
                                                                                                  0x80uLL,
                                                                                                  "%a, %d %b %Y %T %z",
                                                                                                  v3);
                                                                                                result = fprintf(a1, "last reset time was %s\n", v14);
                                                                                                if ( (result & 0x80000000) == 0 )
                                                                                                {
                                                                                                  result = fprintf(a1, "\n");
                                                                                                  if ( (result & 0x80000000) == 0 )
                                                                                                  {
                                                                                                    result = fprintf(a1, "name         alloc %9u   free %9u   extant %9u\n", (unsigned int)dword_100014268, (unsigned int)dword_10001426C, (unsigned int)(dword_100014268 - dword_10001426C));
                                                                                                    if ( (result & 0x80000000) == 0 )
                                                                                                    {
                                                                                                      result = fprintf(a1, "subscription alloc %9u   free %9u   extant %9u\n", (unsigned int)dword_100014270, (unsigned int)dword_100014274, (unsigned int)(dword_100014270 - dword_100014274));
                                                                                                      if ( (result & 0x80000000) == 0 )
                                                                                                      {
                                                                                                        result = fprintf(a1, "portproc     alloc %9u   free %9u   extant %9u\n", (unsigned int)dword_100014278, (unsigned int)dword_10001427C, (unsigned int)(dword_100014278 - dword_10001427C));
                                                                                                        if ( (result & 0x80000000) == 0 )
                                                                                                        {
                                                                                                          result = fprintf(a1, "\n");
                                                                                                          if ( (result & 0x80000000) == 0 )
                                                                                                          {
                                                                                                            v4 = os_set_32_ptr_count(&unk_1000141F0);
                                                                                                            result = fprintf(a1, "port count   %u\n", v4);
                                                                                                            if ( (result & 0x80000000) == 0 )
                                                                                                            {
                                                                                                              v5 = os_set_32_ptr_count(&unk_100014210);
                                                                                                              result = fprintf(a1, "proc count   %u\n", v5);
                                                                                                              if ( (result & 0x80000000) == 0 )
                                                                                                              {
                                                                                                                result = fprintf(a1, "\n");
                                                                                                                if ( (result & 0x80000000) == 0 )
                                                                                                                {
                                                                                                                  result = fprintf(a1, "--- NAME TABLE ---\n");
                                                                                                                  if ( (result & 0x80000000) == 0 )
                                                                                                                  {
                                                                                                                    result = fprintf(a1, "Name Info: id, uid, gid, access, refcount, postcount, last hour postcount, slot, val, state\n");
                                                                                                                    if ( (result & 0x80000000) == 0 )
                                                                                                                    {
                                                                                                                      result = fprintf(a1, "Client Info: client_id, pid,token, lastval, suspend_count, pending, 0, type, type-info\n\n\n");
                                                                                                                      if ( (result & 0x80000000) == 0 )
                                                                                                                      {
                                                                                                                        v13[0] = (__int64)_NSConcreteStackBlock;
                                                                                                                        v13[1] = 0x40000000LL;
                                                                                                                        v13[2] = (__int64)sub_1000047F4;
                                                                                                                        v13[3] = (__int64)&unk_100010728;
                                                                                                                        v13[4] = (__int64)a1;
                                                                                                                        sub_1000006F8((__int64)v13);
                                                                                                                        v6 = os_set_str_ptr_count(&unk_100014190);
                                                                                                                        result = fprintf(a1, "--- NAME COUNT %u ---\n", v6);
                                                                                                                        if ( (result & 0x80000000) == 0 )
                                                                                                                        {
                                                                                                                          result = fprintf(a1, "\n");
                                                                                                                          if ( (result & 0x80000000) == 0 )
                                                                                                                          {
                                                                                                                            result = fprintf(a1, "--- CONTROLLED NAME ---\n");
                                                                                                                            if ( (result & 0x80000000) == 0 )
                                                                                                                            {
                                                                                                                              v7 = (unsigned int)dword_10001425C;
                                                                                                                              if ( dword_10001425C )
                                                                                                                              {
                                                                                                                                v8 = 0LL;
                                                                                                                                while ( 1 )
                                                                                                                                {
                                                                                                                                  result = fprintf(a1, "%s %u %u %03x\n", *(const char **)(*(_QWORD *)(qword_100014248 + 8 * v8) + 8LL), *(unsigned int *)(*(_QWORD *)(qword_100014248 + 8 * v8) + 40LL), *(unsigned int *)(*(_QWORD *)(qword_100014248 + 8 * v8) + 44LL), *(unsigned int *)(*(_QWORD *)(qword_100014248 + 8 * v8) + 48LL));
                                                                                                                                  if ( (result & 0x80000000) != 0 )
                                                                                                                                    break;
                                                                                                                                  ++v8;
                                                                                                                                  v7 = (unsigned int)dword_10001425C;
                                                                                                                                  if ( v8 >= (unsigned int)dword_10001425C )
                                                                                                                                    goto LABEL_67;
                                                                                                                                }
                                                                                                                              }
                                                                                                                              else
                                                                                                                              {
LABEL_67:
                                                                                                                                result = fprintf(a1, "--- CONTROLLED NAME COUNT %u ---\n", v7);
                                                                                                                                if ( (result & 0x80000000) == 0 )
                                                                                                                                {
                                                                                                                                  result = fprintf(a1, "\n");
                                                                                                                                  if ( (result & 0x80000000) == 0 )
                                                                                                                                  {
                                                                                                                                    result = fprintf(a1, "--- PUBLIC SERVICE ---\n");
                                                                                                                                    if ( (result & 0x80000000) == 0 )
                                                                                                                                    {
                                                                                                                                      v12[0] = (__int64)_NSConcreteStackBlock;
                                                                                                                                      v12[1] = 0x40000000LL;
                                                                                                                                      v12[2] = (__int64)sub_100004A58;
                                                                                                                                      v12[3] = (__int64)&unk_100010748;
                                                                                                                                      v12[4] = (__int64)a1;
                                                                                                                                      sub_1000007A8((__int64)v12);
                                                                                                                                      v9 = os_set_str_ptr_count(&unk_100014190);
                                                                                                                                      result = fprintf(a1, "--- PUBLIC SERVICE COUNT %u ---\n", v9);
                                                                                                                                      if ( (result & 0x80000000) == 0 )
                                                                                                                                      {
                                                                                                                                        result = fprintf(a1, "\n");
                                                                                                                                        if ( (result & 0x80000000) == 0 )
                                                                                                                                        {
                                                                                                                                          result = fprintf(a1, "--- PRIVATE SERVICE ---\n");
                                                                                                                                          if ( (result & 0x80000000) == 0 )
                                                                                                                                          {
                                                                                                                                            v11[0] = (__int64)_NSConcreteStackBlock;
                                                                                                                                            v11[1] = 0x40000000LL;
                                                                                                                                            v11[2] = (__int64)sub_100004B2C;
                                                                                                                                            v11[3] = (__int64)&unk_100010768;
                                                                                                                                            v11[4] = (__int64)a1;
                                                                                                                                            sub_1000007A8((__int64)v11);
                                                                                                                                            v10 = os_set_64_ptr_count(&unk_1000141D0);
                                                                                                                                            result = fprintf(a1, "--- PRIVATE SERVICE COUNT %u ---\n", v10);
                                                                                                                                            if ( (result & 0x80000000) == 0 )
                                                                                                                                            {
                                                                                                                                              result = fprintf(a1, "\n");
                                                                                                                                              if ( (result & 0x80000000) == 0 )
                                                                                                                                                return fwrite("-- END --\n", 0xAuLL, 1uLL, a1);
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
  return result;
}
