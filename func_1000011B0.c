// Pseudocode for function at 0x1000011B0
void __fastcall sub_1000011B0(_QWORD *a1)
{
  __int64 v1; // x20
  __int64 v2; // x21
  _QWORD *v4; // x20
  __int64 vars0; // [xsp+20h] [xbp+0h]
  __int64 _28; // [xsp+28h] [xbp+8h]
  __int64 _28a; // [xsp+28h] [xbp+8h]

  if ( *a1 )
  {
    vars0 = v1;
    _28a = v2;
    qword_100014010 = (__int64)"BUG IN LIBNOTIFY: port_proc still had clients";
    __break(1u);
  }
  else
  {
    v4 = a1 + 2;
    sub_100000660((__int64)&unk_100014210, *((unsigned int *)a1 + 4), (__int64)(a1 + 2));
    ++dword_10001427C;
    if ( v4[1] )
      sub_100001250();
    dispatch_release((dispatch_object_t)a1[1]);
    if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    free(a1);
  }
}
