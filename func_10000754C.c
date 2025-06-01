// Pseudocode for function at 0x10000754C
void __fastcall sub_10000754C(__int64 a1)
{
  void *v2; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  dispatch_release(*(dispatch_object_t *)(*(_QWORD *)(a1 + 32) + 48LL));
  free(**(void ***)(a1 + 32));
  free(*(void **)(*(_QWORD *)(a1 + 32) + 64LL));
  v2 = *(void **)(a1 + 32);
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  free(v2);
}
