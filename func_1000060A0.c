// Pseudocode for function at 0x1000060A0
void __cdecl sub_1000060A0(id a1, unsigned int a2, unsigned __int64 a3, void *a4)
{
  const char *string; // x21
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x3
  int v12; // w0
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 v15; // x20
  __int128 v16[2]; // [xsp+30h] [xbp-50h] BYREF
  __int128 v17; // [xsp+50h] [xbp-30h]
  __int64 anonymous0; // [xsp+88h] [xbp+8h]

  switch ( a2 )
  {
    case 2u:
      dispatch_mach_connect(qword_100014280, (unsigned int)dword_100014288, 0LL, 0LL);
      v9 = qword_1000142A0;
      v10 = (unsigned int)dword_10001428C;
      if ( ((anonymous0 ^ (2 * anonymous0)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      dispatch_mach_connect(v9, v10, 0LL, 0LL);
      return;
    case 1u:
      v8 = os_map_64_delete(&unk_100014230, a3, a3, a4);
      if ( v8 )
      {
        ++dword_10001427C;
        if ( ((anonymous0 ^ (2 * anonymous0)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        sub_100006B04(v8);
      }
      return;
    case 0u:
      if ( xpc_get_type(a4) != (xpc_type_t)&_xpc_type_dictionary )
        __assert_rtn(
          "notifyd_matching_register",
          "notify_proc.c",
          1658,
          "xpc_get_type(descriptor) == XPC_TYPE_DICTIONARY");
      string = xpc_dictionary_get_string(a4, "Notification");
      v7 = (unsigned int)dword_100014300++;
      *(_QWORD *)&xmmword_1000140A0 = xmmword_1000140A0 + 1;
      ++qword_1000140D0;
      sub_100004BF4((FILE *)7, "notifyd_matching_register %s %d %llu\n", string, v7, a3);
      v17 = 0u;
      memset(v16, 0, sizeof(v16));
      DWORD1(v17) = xpc_event_publisher_get_subscriber_asid(qword_100014250, a3);
      if ( auditon(32, v16, 48) )
      {
        __error();
        sub_100004BF4((FILE *)4, "auditon on asid %d failed with errno %d, skipping registration\n");
        return;
      }
      v11 = LODWORD(v16[0]);
      if ( LODWORD(v16[0]) != -101 )
      {
        *(_QWORD *)&v16[0] = 0LL;
        if ( string )
        {
          if ( !qword_100014250 )
            __assert_rtn("_notify_lib_register_xpc_event", "libnotify.c", 1109, "ns->event_publisher != NULL");
          v12 = sub_100006DB0(string, 0xFFFFFFFFLL, v7, v11, 4294967195LL, v16);
          if ( !v12 )
          {
            v13 = *(_QWORD *)&v16[0];
            *(_BYTE *)(*(_QWORD *)&v16[0] + 79LL) = *(_BYTE *)(*(_QWORD *)&v16[0] + 79LL) & 0xF0 | 6;
            *(_QWORD *)(v13 + 56) = a3;
            v14 = os_set_64_ptr_find(&unk_1000141D0, v7 | 0xFFFFFFFF00000000LL);
            if ( !v14 || (v15 = v14 - qword_1000141E8, v14 == qword_1000141E8) )
            {
              qword_100014010 = (__int64)"BUG IN LIBNOTIFY: Can't find client after registering an event";
              __break(1u);
            }
            else if ( !os_map_64_find(&unk_100014230, a3) )
            {
              os_map_64_insert(&unk_100014230, a3, v15);
              ++dword_100014278;
              return;
            }
            qword_100014010 = (__int64)"BUG IN LIBNOTIFY: Event token is already registered";
            qword_100014040 = a3;
            __break(1u);
            return;
          }
          if ( v12 == 7 )
            return;
        }
        sub_100004BF4((FILE *)4, "_notify_lib_register_xpc_event failed with status %u\n");
      }
      break;
  }
}
