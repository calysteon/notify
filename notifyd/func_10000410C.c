// Pseudocode for function at 0x10000410C
bool __fastcall sub_10000410C(__int64 a1, __int64 a2)
{
  FILE *v4; // x20
  __int64 v5; // x22
  int v6; // w0
  _QWORD *v7; // x16
  __int64 v8; // x8
  __int64 v9; // x9
  __int64 v10; // x10
  __int64 v11; // x12
  __int64 v12; // x13
  __int64 v13; // x14
  __int64 v14; // x15
  __int64 v15; // x11
  unsigned int v16; // w17
  unsigned int v17; // w17
  _QWORD *i; // x21

  v4 = *(FILE **)(a1 + 40);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
  if ( (fprintf(v4, "name: %s\n", *(const char **)(a2 + 8)) & 0x80000000) != 0
    || (fprintf(v4, "id: %llu\n", *(_QWORD *)(a2 + 16)) & 0x80000000) != 0
    || (fprintf(v4, "uid: %u\n", *(unsigned int *)(a2 + 40)) & 0x80000000) != 0
    || (fprintf(v4, "gid: %u\n", *(unsigned int *)(a2 + 44)) & 0x80000000) != 0
    || (fprintf(v4, "access: %03x\n", *(unsigned int *)(a2 + 48)) & 0x80000000) != 0
    || (fprintf(v4, "refcount: %u\n", *(unsigned int *)(a2 + 56)) & 0x80000000) != 0
    || (fprintf(v4, "postcount: %u\n", *(unsigned int *)(a2 + 64)) & 0x80000000) != 0
    || (fprintf(v4, "last hour postcount: %u\n", *(unsigned int *)(a2 + 68)) & 0x80000000) != 0 )
  {
    return fprintf(*(FILE **)(a1 + 40), "\n") >= 0;
  }
  if ( *(_DWORD *)(a2 + 52) == -1 )
  {
    v6 = fprintf(v4, "slot: -unassigned-");
  }
  else
  {
    if ( (fprintf(v4, "slot: %u", *(unsigned int *)(a2 + 52)) & 0x80000000) != 0 )
      return fprintf(*(FILE **)(a1 + 40), "\n") >= 0;
    if ( *(_DWORD *)(qword_1000142E8 + 4LL * *(unsigned int *)(a2 + 52)) == -1 )
      goto LABEL_15;
    v6 = fprintf(v4, " = %u (%u)");
  }
  if ( (v6 & 0x80000000) != 0 )
    return fprintf(*(FILE **)(a1 + 40), "\n") >= 0;
LABEL_15:
  if ( (fprintf(v4, "\n") & 0x80000000) == 0
    && (fprintf(v4, "val: %u\n", *(unsigned int *)(a2 + 60)) & 0x80000000) == 0
    && (fprintf(v4, "state: %llu\n", *(_QWORD *)(a2 + 24)) & 0x80000000) == 0 )
  {
    v7 = *(_QWORD **)a2;
    if ( *(_QWORD *)a2 )
    {
      v8 = 0LL;
      v9 = 0LL;
      v10 = 0LL;
      v11 = 0LL;
      v12 = 0LL;
      v13 = 0LL;
      v14 = 0LL;
      v15 = 0LL;
      while ( 1 )
      {
        v16 = *((_DWORD *)v7 + 17);
        if ( v16 != -1 && v16 > *(_DWORD *)(v5 + 24) )
          *(_DWORD *)(v5 + 24) = v16;
        v17 = *((_BYTE *)v7 + 79) & 0xF;
        if ( v17 <= 3 )
        {
          switch ( v17 )
          {
            case 1u:
              v8 = (unsigned int)(v8 + 1);
              break;
            case 2u:
              v9 = (unsigned int)(v9 + 1);
              break;
            case 3u:
              v10 = (unsigned int)(v10 + 1);
              break;
            default:
              goto LABEL_36;
          }
        }
        else if ( (*((_BYTE *)v7 + 79) & 0xFu) > 5 )
        {
          if ( v17 == 6 )
          {
            v13 = (unsigned int)(v13 + 1);
            goto LABEL_40;
          }
          if ( v17 != 7 )
            goto LABEL_36;
          v14 = (unsigned int)(v14 + 1);
        }
        else
        {
          if ( v17 == 4 )
          {
            v11 = (unsigned int)(v11 + 1);
            goto LABEL_40;
          }
          if ( v17 != 5 )
          {
LABEL_36:
            v15 = (unsigned int)(v15 + 1);
            goto LABEL_40;
          }
          v12 = (unsigned int)(v12 + 1);
        }
LABEL_40:
        v7 = (_QWORD *)*v7;
        if ( !v7 )
          goto LABEL_43;
      }
    }
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
LABEL_43:
    if ( (fprintf(
            v4,
            "types: none %u   memory %u   plain %u   port %u   file %u   signal %u   event %u   common %u\n",
            v15,
            v8,
            v9,
            v10,
            v11,
            v12,
            v13,
            v14) & 0x80000000) == 0 )
    {
      for ( i = *(_QWORD **)a2; i; i = (_QWORD *)*i )
      {
        if ( (fprintf(v4, "\n") & 0x80000000) != 0 )
          break;
        sub_100004640(v4, i);
      }
    }
  }
  return fprintf(*(FILE **)(a1 + 40), "\n") >= 0;
}
