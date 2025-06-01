// Pseudocode for function at 0x1000012E8
void __fastcall sub_1000012E8(__int64 *a1)
{
  __int64 v2; // x0
  __int64 v3; // x20
  dispatch_source_s *v4; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  v2 = *a1;
  if ( v2 )
  {
    do
    {
      v3 = *(_QWORD *)(v2 + 16);
      sub_1000008E4(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  v4 = (dispatch_source_s *)a1[1];
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  dispatch_source_cancel(v4);
}
