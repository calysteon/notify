// Pseudocode for function at 0x100006DB0
__int64 __fastcall sub_100006DB0(const char *a1, __int64 a2, unsigned int a3, __int64 a4, int a5, _QWORD *a6)
{
  __int64 result; // x0
  __int64 v11; // x0
  __int64 v12; // x20
  unsigned __int64 v13; // x21
  __int64 v14; // x0
  _QWORD *v15; // x0
  _QWORD *v16; // x22
  __int64 v17; // x8

  if ( !a6 )
    return 0LL;
  if ( (unsigned int)sub_1000064E8(a1, a4, a5, 1) )
    return 7LL;
  *a6 = 0LL;
  v11 = os_set_str_ptr_find(&unk_100014190, a1);
  if ( !v11 || (v12 = v11 - qword_1000141A8, v11 == qword_1000141A8) )
  {
    v12 = sub_100006F0C(a1);
    if ( !v12 )
      return 47LL;
  }
  v13 = a3 | (unsigned __int64)(a2 << 32);
  ++*(_DWORD *)(v12 + 56);
  v14 = os_set_64_ptr_find(&unk_1000141D0, v13);
  if ( (!v14 || qword_1000141E8 == v14) && (v15 = (_QWORD *)malloc_type_calloc(1LL, 88LL, 0x10A0040BED8B209LL)) != 0LL )
  {
    v16 = v15;
    ++dword_100014270;
    v15[8] = v13;
    v15[6] = v12;
    v17 = *(_QWORD *)v12;
    *v15 = *(_QWORD *)v12;
    if ( v17 )
      *(_QWORD *)(v17 + 8) = v15;
    *(_QWORD *)v12 = v15;
    v15[1] = v12;
    os_set_64_ptr_insert(&unk_1000141D0, v15 + 8);
    result = 0LL;
    *a6 = v16;
  }
  else
  {
    sub_100006BC0(v12);
    return 48LL;
  }
  return result;
}
