// Pseudocode for function at 0x1000097CC
void __fastcall sub_1000097CC(__int64 a1, __int64 a2)
{
  int v3; // w8
  unsigned int v5; // w22
  unsigned int v6; // w9
  unsigned int v7; // w9
  __int64 v8; // x23
  int v9; // w21
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  unsigned __int64 v18; // x7
  const char *v19; // x10
  unsigned int v20; // w9
  __int128 v21; // q1
  int v22; // w8
  __int128 v23[2]; // [xsp+30h] [xbp-50h] BYREF

  if ( (*(_DWORD *)a1 & 0x80000000) == 0 )
    goto LABEL_2;
  v3 = -304;
  if ( *(_DWORD *)(a1 + 24) != 2 )
    goto LABEL_3;
  v5 = *(_DWORD *)(a1 + 4);
  if ( v5 - 625 < 0xFFFFFDFF )
    goto LABEL_3;
  if ( *(unsigned __int16 *)(a1 + 38) << 16 != 1114112 || *(_BYTE *)(a1 + 51) != 1 )
    goto LABEL_20;
  v6 = *(_DWORD *)(a1 + 68);
  if ( v6 > 0x200 )
  {
LABEL_2:
    v3 = -304;
LABEL_3:
    *(_DWORD *)(a2 + 32) = v3;
    *(NDR_record_t *)(a2 + 24) = NDR_record;
    return;
  }
  v3 = -304;
  if ( v5 - 112 < v6 )
    goto LABEL_3;
  v7 = (v6 + 3) & 0xFFFFFFFC;
  if ( v5 != v7 + 112 )
    goto LABEL_3;
  v8 = a1 + v7;
  v9 = *(_DWORD *)(a1 + 52);
  if ( v9 != *(_DWORD *)(v8 + 104) )
  {
LABEL_20:
    v3 = -300;
    goto LABEL_3;
  }
  if ( v5 >= 0x248 )
    v10 = 584LL;
  else
    v10 = v5;
  if ( !memchr((const void *)(a1 + 72), 0, v10 - 72) )
    goto LABEL_2;
  v11 = (((_WORD)v5 + 3) & 0x7FC) + a1;
  if ( *(_DWORD *)v11 || *(_DWORD *)(v11 + 4) <= 0x1Fu )
  {
    v3 = -309;
    goto LABEL_3;
  }
  v12 = *(unsigned int *)(v8 + 72);
  v13 = *(unsigned int *)(v8 + 76);
  v14 = *(unsigned int *)(a1 + 28);
  v15 = *(unsigned int *)(v8 + 80);
  v16 = *(unsigned int *)(v8 + 84);
  v17 = *(_QWORD *)(v8 + 88);
  v18 = *(_QWORD *)(v8 + 96);
  v19 = *(const char **)(a1 + 40);
  v20 = *(_DWORD *)(v8 + 108);
  v21 = *(_OWORD *)(v11 + 36);
  v23[0] = *(_OWORD *)(v11 + 20);
  v23[1] = v21;
  sub_100002100(
    (const char *)(a1 + 72),
    v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v9,
    v20,
    (int *)(a2 + 36),
    (_QWORD *)(a2 + 40),
    (int *)(a2 + 48),
    v23);
  *(_DWORD *)(a2 + 32) = 0;
  mig_deallocate(*(_QWORD *)(a1 + 40), *(unsigned int *)(a1 + 52));
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 52) = 0;
  v22 = *(_DWORD *)(a2 + 32);
  *(NDR_record_t *)(a2 + 24) = NDR_record;
  if ( !v22 )
    *(_DWORD *)(a2 + 4) = 52;
}
