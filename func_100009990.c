// Pseudocode for function at 0x100009990
void __fastcall sub_100009990(__int64 a1, __int64 a2)
{
  int v4; // w2
  int v5; // w8
  __int64 v6; // x0
  const char *v7; // x1
  __int64 v8; // x3
  __int128 v9; // q1
  __int128 v10[2]; // [xsp+0h] [xbp-30h] BYREF

  if ( (*(_DWORD *)a1 & 0x80000000) != 0 && *(_DWORD *)(a1 + 24) == 1 && *(_DWORD *)(a1 + 4) == 64 )
  {
    if ( *(_BYTE *)(a1 + 39) == 1 && (v4 = *(_DWORD *)(a1 + 40), v4 == *(_DWORD *)(a1 + 56)) )
    {
      if ( !*(_DWORD *)(a1 + 64) && *(_DWORD *)(a1 + 68) > 0x1Fu )
      {
        v6 = *(unsigned int *)(a1 + 52);
        v7 = *(const char **)(a1 + 28);
        v8 = *(unsigned int *)(a1 + 60);
        v9 = *(_OWORD *)(a1 + 100);
        v10[0] = *(_OWORD *)(a1 + 84);
        v10[1] = v9;
        sub_100001FD8(v6, v7, v4, v8, v10);
        *(_DWORD *)(a2 + 32) = 0;
        mig_deallocate(*(_QWORD *)(a1 + 28), *(unsigned int *)(a1 + 40));
        *(_QWORD *)(a1 + 28) = 0LL;
        *(_DWORD *)(a1 + 40) = 0;
        return;
      }
      v5 = -309;
    }
    else
    {
      v5 = -300;
    }
  }
  else
  {
    v5 = -304;
  }
  *(_DWORD *)(a2 + 32) = v5;
  *(NDR_record_t *)(a2 + 24) = NDR_record;
}
