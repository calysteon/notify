// Pseudocode for function at 0x100005D78
void __fastcall sub_100005D78(__int64 a1)
{
  __int64 v2; // x8
  const char *v3; // x20
  __int64 v4; // x21
  __int64 v5; // x0
  __int64 v7; // x0
  __int64 v8; // x21
  dispatch_source_s *v9; // x0
  void **v10; // x0
  __int128 v11; // [xsp+0h] [xbp-50h] BYREF
  __int128 v12; // [xsp+10h] [xbp-40h]
  __int64 v13; // [xsp+20h] [xbp-30h]
  __int64 v14; // [xsp+28h] [xbp-28h]
  __int64 anonymous1; // [xsp+58h] [xbp+8h]

  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(const char **)(v2 + 8);
  v4 = *(_QWORD *)(v2 + 16);
  ++qword_100014168;
  if ( v4 )
  {
    v5 = os_set_str_ptr_find(&unk_100014190, v3);
    if ( v5 && qword_1000141A8 != v5 )
    {
      v11 = 0u;
      v12 = 0u;
      v7 = sub_1000075A4(v4, &v11, 1LL, 1023LL);
      if ( v7 )
      {
        v8 = v7;
        *(_QWORD *)(v7 + 80) = strdup(v3);
        v9 = *(dispatch_source_s **)(v8 + 72);
        *(_QWORD *)&v11 = _NSConcreteStackBlock;
        *((_QWORD *)&v11 + 1) = 0x40000000LL;
        *(_QWORD *)&v12 = sub_1000085B4;
        *((_QWORD *)&v12 + 1) = &unk_100010980;
        v13 = v8;
        v14 = 0LL;
        dispatch_source_set_event_handler(v9, &v11);
        dispatch_activate(*(dispatch_object_t *)(v8 + 72));
      }
    }
  }
  v10 = *(void ***)(a1 + 32);
  if ( ((anonymous1 ^ (2 * anonymous1)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  sub_100005D20(v10);
}
