// Pseudocode for function at 0x1000018A8
__int64 __fastcall sub_1000018A8(__int64 a1, __int64 a2, __int64 a3, __int128 *a4)
{
  __int64 v8; // x0
  bool v9; // zf
  ipc_space_t v10; // w0
  __int128 v11; // q1
  __int128 v13[2]; // [xsp+0h] [xbp-50h] BYREF
  __int64 anonymous0; // [xsp+58h] [xbp+8h]

  v8 = os_set_32_ptr_find(&unk_1000141F0);
  if ( v8 )
    v9 = qword_100014208 == v8;
  else
    v9 = 1;
  if ( v9 )
  {
    v10 = mach_task_self_;
    if ( ((anonymous0 ^ (2 * anonymous0)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return mach_port_deallocate(v10, a3);
  }
  else
  {
    v11 = a4[1];
    v13[0] = *a4;
    v13[1] = v11;
    return sub_100001964(a1, a2, a3, v13);
  }
}
