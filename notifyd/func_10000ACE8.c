// Pseudocode for function at 0x10000ACE8
void __fastcall sub_10000ACE8(__int64 a1, __int64 a2)
{
  int v3; // w8
  __int64 v4; // x20
  __int128 v5; // q1
  __int64 v6; // x0
  int v7; // w8
  __int128 v8[2]; // [xsp+10h] [xbp-40h] BYREF
  unsigned int v9; // [xsp+3Ch] [xbp-14h] BYREF

  if ( (*(_DWORD *)a1 & 0x80000000) != 0 || *(_DWORD *)(a1 + 4) != 36 )
  {
    v3 = -304;
    goto LABEL_7;
  }
  if ( *(_DWORD *)(a1 + 36) || *(_DWORD *)(a1 + 40) <= 0x1Fu )
  {
    v3 = -309;
LABEL_7:
    *(_DWORD *)(a2 + 32) = v3;
    *(NDR_record_t *)(a2 + 24) = NDR_record;
    return;
  }
  v4 = *(unsigned int *)(a1 + 32);
  v5 = *(_OWORD *)(a1 + 72);
  v8[0] = *(_OWORD *)(a1 + 56);
  v8[1] = v5;
  v9 = -1;
  sub_100000AB0(v8, 0xFFFFFFFFLL, 0LL, 0LL, &v9, 0LL);
  ++qword_1000140F0;
  sub_100004BF4((FILE *)7, "__notify_server_resume %d %d\n", v9, v4);
  v6 = os_set_64_ptr_find(&unk_1000141D0, v4 | ((unsigned __int64)v9 << 32));
  if ( v6 && qword_1000141E8 != v6 )
  {
    sub_100006CEC(v6 - qword_1000141E8, 0LL, 0LL);
    v7 = 0;
  }
  else
  {
    v7 = 50;
  }
  *(_DWORD *)(a2 + 32) = 0;
  *(_DWORD *)(a2 + 36) = v7;
  *(NDR_record_t *)(a2 + 24) = NDR_record;
  *(_DWORD *)(a2 + 4) = 40;
}
