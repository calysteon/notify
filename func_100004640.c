// Pseudocode for function at 0x100004640
size_t __fastcall sub_100004640(FILE *a1, __int64 a2)
{
  size_t result; // x0
  __int64 v5; // x8
  const char *v6; // x8
  unsigned int v7; // w8
  __int64 _28; // [xsp+28h] [xbp+8h]

  result = fprintf(a1, "client_id: %llu\n", *(_QWORD *)(a2 + 64));
  if ( (result & 0x80000000) == 0 )
  {
    result = fprintf(a1, "pid: %d\n", *(unsigned int *)(a2 + 68));
    if ( (result & 0x80000000) == 0 )
    {
      result = fprintf(a1, "token: %d\n", *(unsigned int *)(a2 + 64));
      if ( (result & 0x80000000) == 0 )
      {
        result = fprintf(a1, "lastval: %u\n", *(unsigned int *)(a2 + 72));
        if ( (result & 0x80000000) == 0 )
        {
          result = fprintf(a1, "suspend_count: %u\n", *(unsigned __int8 *)(a2 + 78));
          if ( (result & 0x80000000) == 0 )
          {
            v5 = *(_BYTE *)(a2 + 79) & 0xF;
            v6 = (unsigned int)v5 > 7 ? "unknown" : (&off_100010880)[v5];
            result = fprintf(a1, "type: %s\n", v6);
            if ( (result & 0x80000000) == 0 )
            {
              v7 = *(_BYTE *)(a2 + 79) & 0xF;
              if ( v7 <= 4 )
              {
                if ( v7 == 3 )
                {
                  return fprintf(a1, "mach port: 0x%08x\n");
                }
                else if ( v7 == 4 )
                {
                  return fprintf(a1, "fd: %d\n");
                }
              }
              else
              {
                switch ( v7 )
                {
                  case 5u:
                    return fprintf(a1, "signal: %d\n");
                  case 6u:
                    return fprintf(a1, "xpc event: %llu\n");
                  case 7u:
                    if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
                      __break(0xC471u);
                    return fwrite("common port\n", 0xCuLL, 1uLL, a1);
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
