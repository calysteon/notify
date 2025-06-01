// Pseudocode for function at 0x100009DBC
__int64 __fastcall sub_100009DBC(__int64 result, __int64 a2)
{
  int v3; // w8
  __int64 v4; // x20
  __int128 v5; // q1
  int v6; // w8
  __int128 v7[2]; // [xsp+10h] [xbp-40h] BYREF
  gid_t v8; // [xsp+38h] [xbp-18h] BYREF
  uid_t v9; // [xsp+3Ch] [xbp-14h] BYREF

  if ( (*(_DWORD *)result & 0x80000000) != 0 || *(_DWORD *)(result + 4) != 40 )
  {
    v3 = -304;
    goto LABEL_7;
  }
  if ( *(_DWORD *)(result + 40) || *(_DWORD *)(result + 44) <= 0x1Fu )
  {
    v3 = -309;
LABEL_7:
    *(_DWORD *)(a2 + 32) = v3;
    *(NDR_record_t *)(a2 + 24) = NDR_record;
    return result;
  }
  v4 = *(_QWORD *)(result + 32);
  v5 = *(_OWORD *)(result + 76);
  v7[0] = *(_OWORD *)(result + 60);
  v7[1] = v5;
  v8 = -1;
  v9 = -1;
  *(_QWORD *)(a2 + 36) = 0LL;
  sub_100000AB0(v7, 0xFFFFFFFFLL, &v9, &v8, 0LL, 0LL);
  sub_100004BF4((FILE *)7, "__notify_server_get_state_2 %llu\n", v4);
  *(_QWORD *)(a2 + 36) = 0LL;
  result = os_set_64_ptr_find(&unk_1000141B0, v4);
  if ( result && qword_1000141C8 != result )
  {
    v6 = 0;
    *(_QWORD *)(a2 + 36) = *(_QWORD *)(result - qword_1000141C8 + 24);
  }
  else
  {
    v6 = 1;
  }
  *(_DWORD *)(a2 + 44) = v6;
  *(_DWORD *)(a2 + 32) = 0;
  *(NDR_record_t *)(a2 + 24) = NDR_record;
  *(_DWORD *)(a2 + 4) = 48;
  return result;
}
