// Pseudocode for function at 0x100004DAC
__int64 __fastcall sub_100004DAC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // x0
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 _28; // [xsp+28h] [xbp+8h]

  if ( !a1 )
    return 10LL;
  result = os_set_str_ptr_find(&unk_100014190, a1);
  if ( result )
  {
    if ( qword_1000141A8 == result )
    {
      return 0LL;
    }
    else
    {
      v7 = *(unsigned int *)(result - qword_1000141A8 + 52);
      if ( (_DWORD)v7 != -1 )
        ++*(_DWORD *)(qword_1000142E0 + 4 * v7);
      v8 = os_set_str_ptr_find(&unk_100014190, a1);
      if ( v8 && qword_1000141A8 != v8 )
      {
        v9 = v8 - qword_1000141A8;
        if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        return sub_100006AA0(v9, a2, a3);
      }
      else
      {
        return 1LL;
      }
    }
  }
  return result;
}
