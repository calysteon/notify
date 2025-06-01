// Pseudocode for function at 0x100009EE0
__int64 __fastcall sub_100009EE0(__int64 result, __int64 a2)
{
  int v3; // w8
  __int64 v4; // x20
  __int128 v5; // q1
  __int128 v6[2]; // [xsp+10h] [xbp-40h] BYREF
  unsigned int v7; // [xsp+38h] [xbp-18h] BYREF
  uid_t v8; // [xsp+3Ch] [xbp-14h] BYREF

  if ( (*(_DWORD *)result & 0x80000000) != 0 || *(_DWORD *)(result + 4) != 36 )
  {
    v3 = -304;
    goto LABEL_7;
  }
  if ( *(_DWORD *)(result + 36) || *(_DWORD *)(result + 40) <= 0x1Fu )
  {
    v3 = -309;
LABEL_7:
    *(_DWORD *)(a2 + 32) = v3;
    *(NDR_record_t *)(a2 + 24) = NDR_record;
    return result;
  }
  v4 = *(unsigned int *)(result + 32);
  v5 = *(_OWORD *)(result + 72);
  v6[0] = *(_OWORD *)(result + 56);
  v6[1] = v5;
  v7 = -1;
  v8 = -1;
  sub_100000AB0(v6, 0xFFFFFFFFLL, &v8, 0LL, &v7, 0LL);
  ++qword_1000140E0;
  sub_100004BF4((FILE *)7, "__notify_server_cancel %d %d\n", v7, v4);
  result = os_set_64_ptr_find(&unk_1000141D0, v4 | ((unsigned __int64)v7 << 32));
  if ( result )
  {
    if ( qword_1000141E8 != result )
      result = sub_1000008E4(result - qword_1000141E8);
  }
  *(_DWORD *)(a2 + 32) = 0;
  return result;
}
