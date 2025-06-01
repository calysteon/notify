// Pseudocode for function at 0x100006F0C
__int64 __fastcall sub_100006F0C(const char *a1)
{
  size_t v2; // x21
  __int64 v3; // x0
  __int64 v4; // x19
  __int64 v5; // x9

  v2 = strlen(a1);
  v3 = malloc_type_calloc(1LL, v2 + 73, 0x103004098686315LL);
  v4 = v3;
  if ( v3 )
  {
    ++dword_100014268;
    *(_QWORD *)(v3 + 8) = v3 + 72;
    memcpy((void *)(v3 + 72), a1, v2 + 1);
    v5 = qword_100014188 + 1;
    *(_QWORD *)(v4 + 16) = qword_100014188;
    qword_100014188 = v5;
    *(_QWORD *)(v4 + 48) = -4294966477LL;
    *(_DWORD *)(v4 + 60) = 1;
    *(_QWORD *)v4 = 0LL;
    os_set_str_ptr_insert(&unk_100014190, v4 + 8);
    os_set_64_ptr_insert(&unk_1000141B0, v4 + 16);
  }
  return v4;
}
