// Pseudocode for function at 0x100006D20
__int64 __fastcall sub_100006D20(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // x0
  __int64 v8; // x22
  __int64 result; // x0
  uint64_t v10; // x8

  v7 = os_set_64_ptr_find(&unk_1000141B0, a1);
  if ( !v7 )
    return 1LL;
  v8 = v7 - qword_1000141C8;
  if ( v7 == qword_1000141C8 )
    return 1LL;
  if ( (unsigned int)sub_1000064E8(*(const char **)(v8 + 8), a3, a4, 2) )
    return 7LL;
  *(_QWORD *)(v8 + 24) = a2;
  v10 = mach_absolute_time();
  result = 0LL;
  *(_QWORD *)(v8 + 32) = v10;
  return result;
}
