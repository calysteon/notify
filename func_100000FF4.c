// Pseudocode for function at 0x100000FF4
__int64 __fastcall sub_100000FF4(__int64 result, __int64 a2)
{
  __int64 v3; // x19
  __int64 *v4; // x8
  __int64 v5; // x9
  __int64 _18; // [xsp+18h] [xbp+8h]

  if ( (int)a2 < 1 )
    return result;
  v3 = result;
  result = os_set_32_ptr_find(&unk_100014210);
  if ( result )
  {
    if ( v3 && result != qword_100014228 )
    {
      v4 = (__int64 *)(result - qword_100014228);
      v5 = *(_QWORD *)(result - qword_100014228);
      *(_QWORD *)(v3 + 16) = v5;
      if ( v5 )
        *(_QWORD *)(v5 + 24) = v3 + 16;
      *v4 = v3;
      *(_QWORD *)(v3 + 24) = v4;
      return result;
    }
    if ( qword_100014228 != result )
      return result;
  }
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return sub_100001094(v3, a2);
}
