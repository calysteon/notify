// Pseudocode for function at 0x100007190
void __fastcall sub_100007190(__int64 a1)
{
  int v2; // w8
  int v3; // w8
  __int64 v4; // x0
  void *v5; // x0
  __int64 v6; // x8
  __int64 v7; // x20
  __int64 v8; // x21
  __int64 _28; // [xsp+28h] [xbp+8h]

  if ( a1 )
  {
    v2 = *(_DWORD *)(a1 + 104);
    if ( !v2 || (v3 = v2 - 1, (*(_DWORD *)(a1 + 104) = v3) == 0) )
    {
      v4 = sub_10000725C(a1);
      sub_1000072C0(v4);
      free(*(void **)a1);
      v5 = *(void **)(a1 + 56);
      if ( v5 )
      {
        v6 = *(unsigned int *)(a1 + 48);
        *(_DWORD *)(a1 + 48) = 0;
        if ( (_DWORD)v6 )
        {
          v7 = 0LL;
          v8 = 8 * v6;
          do
          {
            free(*(void **)(*(_QWORD *)(a1 + 56) + v7));
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + v7) = 0LL;
            v7 += 8LL;
          }
          while ( v8 != v7 );
          v5 = *(void **)(a1 + 56);
        }
        free(v5);
      }
      free(*(void **)(a1 + 80));
      dispatch_release(*(dispatch_object_t *)(a1 + 72));
      if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      free((void *)a1);
    }
  }
}
