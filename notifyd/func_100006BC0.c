// Pseudocode for function at 0x100006BC0
void __fastcall sub_100006BC0(__int64 a1)
{
  int v2; // w8
  int v3; // w8
  int v4; // w9
  __int64 v5; // x11
  void *v6; // x0
  __int64 v7; // x10
  unsigned int v8; // w9
  void *v9; // x0

  if ( a1 )
  {
    v2 = *(_DWORD *)(a1 + 56);
    if ( !v2 || (v3 = v2 - 1, (*(_DWORD *)(a1 + 56) = v3) == 0) )
    {
      v4 = dword_10001425C;
      if ( dword_10001425C )
      {
        v5 = 0LL;
        v6 = (void *)qword_100014248;
        while ( 1 )
        {
          v7 = v5 + 1;
          if ( *(_QWORD *)(qword_100014248 + 8 * v5) == a1 )
            break;
          ++v5;
          if ( dword_10001425C == v7 )
            goto LABEL_16;
        }
        if ( (int)v5 + 1 < (unsigned int)dword_10001425C )
        {
          do
          {
            *(_QWORD *)(qword_100014248 + 8LL * (unsigned int)(v7 - 1)) = *(_QWORD *)(qword_100014248 + 8 * v7);
            ++v7;
          }
          while ( v4 != (_DWORD)v7 );
          v6 = (void *)qword_100014248;
        }
        v8 = v4 - 1;
        dword_10001425C = v8;
        if ( v8 )
        {
          v9 = reallocf(v6, 8LL * v8);
        }
        else
        {
          free(v6);
          v9 = 0LL;
        }
        qword_100014248 = (__int64)v9;
      }
LABEL_16:
      if ( os_set_str_ptr_delete(&unk_100014190, *(_QWORD *)(a1 + 8)) != a1 + 8 )
        __assert_rtn("_nc_table_delete", "table.c", 72, "os_set_delete(&t->set, key) == expected");
      *(_QWORD *)(a1 + 8) = 0LL;
      sub_1000006AC((__int64)&unk_1000141B0, *(_QWORD *)(a1 + 16), a1 + 16);
      free((void *)a1);
      ++dword_10001426C;
    }
  }
}
