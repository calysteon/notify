// Pseudocode for function at 0x1000047F4
bool __fastcall sub_1000047F4(__int64 a1, __int64 **a2)
{
  FILE *v4; // x20
  int v5; // w0
  __int64 *i; // x22
  unsigned int v7; // w8
  const char *v8; // x0
  size_t v9; // x1

  if ( a2 )
  {
    v4 = *(FILE **)(a1 + 32);
    if ( (fprintf(v4, "name:%s\n", (const char *)a2[1]) & 0x80000000) == 0
      && (fprintf(
            v4,
            "info:%llu,%u,%u,%03x,%u,%u,%u,",
            a2[2],
            *((unsigned int *)a2 + 10),
            *((unsigned int *)a2 + 11),
            *((unsigned int *)a2 + 12),
            *((unsigned int *)a2 + 14),
            *((unsigned int *)a2 + 16),
            *((unsigned int *)a2 + 17)) & 0x80000000) == 0 )
    {
      v5 = *((_DWORD *)a2 + 13) == -1 ? fprintf(v4, "-1,") : fprintf(v4, "%u,");
      if ( (v5 & 0x80000000) == 0
        && (fprintf(v4, "%u,%llu\n", *((unsigned int *)a2 + 15), a2[3]) & 0x80000000) == 0
        && (fprintf(v4, "clients:\n") & 0x80000000) == 0 )
      {
        for ( i = *a2; i; i = (__int64 *)*i )
        {
          if ( (fprintf(
                  v4,
                  "%llu,%d,%d,%u,%u,%u,",
                  i[8],
                  HIDWORD(i[8]),
                  i[8],
                  *((unsigned int *)i + 18),
                  *((unsigned __int8 *)i + 78),
                  0LL) & 0x80000000) == 0 )
          {
            v7 = *((_BYTE *)i + 79) & 0xF;
            if ( v7 > 4 )
            {
              if ( v7 != 5 )
              {
                if ( v7 == 6 )
                {
                  fprintf(v4, "event,%llu\n");
                  continue;
                }
                if ( v7 == 7 )
                {
                  v8 = "common-port\n";
                  v9 = 12LL;
LABEL_25:
                  fwrite(v8, v9, 1uLL, v4);
                  continue;
                }
LABEL_23:
                v8 = "other,0\n";
LABEL_24:
                v9 = 8LL;
                goto LABEL_25;
              }
              fprintf(v4, "signal,%d\n");
            }
            else
            {
              if ( v7 == 1 )
              {
                v8 = "check,0\n";
                goto LABEL_24;
              }
              if ( v7 == 3 )
              {
                fprintf(v4, "port,0x%08x\n");
                continue;
              }
              if ( v7 != 4 )
                goto LABEL_23;
              fprintf(v4, "fd,%d\n");
            }
          }
        }
        fputc(10, v4);
      }
    }
  }
  return fprintf(*(FILE **)(a1 + 32), "\n") >= 0;
}
