// Pseudocode for function at 0x100005D20
void __fastcall sub_100005D20(void **a1)
{
  void *v2; // x0
  void **v3; // x20
  void *v4; // t1
  __int64 _18; // [xsp+18h] [xbp+8h]

  if ( a1 )
  {
    v2 = *a1;
    if ( v2 )
    {
      v3 = a1 + 1;
      do
      {
        free(v2);
        *(v3 - 1) = 0LL;
        v4 = *v3++;
        v2 = v4;
      }
      while ( v4 );
    }
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    free(a1);
  }
}
