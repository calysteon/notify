// Pseudocode for function at 0x1000008E4
__int64 __fastcall sub_1000008E4(__int64 a1)
{
  unsigned int v2; // w8
  _QWORD *v3; // x20
  __int64 v4; // x21
  dispatch_source_s *v5; // x0
  __int64 v6; // x8
  int v7; // w9
  __int64 v9; // x8
  _QWORD *v10; // x9
  __int64 v11; // x8
  _QWORD *v12; // x9
  __int64 _28; // [xsp+28h] [xbp+8h]

  ++qword_100014170;
  if ( *(_WORD *)(a1 + 76) )
  {
    v2 = *(unsigned __int16 *)(a1 + 76) - 1;
    v3 = *(_QWORD **)(qword_100014290 + 8LL * v2);
    *(_QWORD *)(qword_100014290 + 8LL * v2) = 0LL;
    if ( (unsigned int)(*(_DWORD *)v3 - 1) <= 1 )
    {
      v4 = v3[1];
      dispatch_assert_queue_V2((dispatch_queue_t)qword_100014298);
      if ( v4 )
      {
        v5 = *(dispatch_source_s **)(v4 + 72);
        if ( v5 )
          dispatch_source_cancel(v5);
        sub_100007190(v4);
      }
    }
    free(v3);
    *(_WORD *)(a1 + 76) = 0;
  }
  v6 = *(_QWORD *)(a1 + 48);
  if ( !v6 )
    __assert_rtn("port_proc_cancel_client", "notify_proc.c", 330, "n != NULL");
  v7 = *(_BYTE *)(a1 + 79) & 0xF;
  if ( v7 == 7 || v7 == 3 )
  {
    v9 = *(_QWORD *)(a1 + 32);
    v10 = *(_QWORD **)(a1 + 40);
    if ( v9 )
      *(_QWORD *)(v9 + 40) = v10;
    *v10 = v9;
  }
  else if ( v7 == 1 )
  {
    --*(_DWORD *)(qword_1000142E8 + 4LL * *(unsigned int *)(v6 + 52));
  }
  v11 = *(_QWORD *)(a1 + 16);
  v12 = *(_QWORD **)(a1 + 24);
  if ( v11 )
    *(_QWORD *)(v11 + 24) = v12;
  *v12 = v11;
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return sub_100006B04(a1);
}
