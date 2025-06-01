// Pseudocode for function at 0x100006694
void __fastcall sub_100006694(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // w8
  char v6; // w9
  char v7; // w8
  __int64 v8; // x0
  unsigned int v9; // w10
  pid_t v10; // w0
  __int64 v11; // x8
  __int64 v12; // x2
  xpc_object_t v13; // x20
  __int64 v14; // x0
  int v15; // w21
  __int64 has_internal_diagnostics; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  __int128 v24[8]; // [xsp+10h] [xbp-B0h] BYREF
  __int64 anonymous0; // [xsp+C8h] [xbp+8h]

  v4 = *(_BYTE *)(a1 + 79);
  if ( (v4 & 0x20) != 0 )
  {
    v7 = v4 | 0x40;
    goto LABEL_39;
  }
  if ( a2 )
  {
LABEL_3:
    if ( (*(_BYTE *)(a2 + 20) & 1) == 0 )
    {
      v6 = 0;
      goto LABEL_12;
    }
    ++*(_BYTE *)(a1 + 78);
    v7 = v4 | 0x60;
LABEL_39:
    *(_BYTE *)(a1 + 79) = v7;
    return;
  }
  v8 = os_set_32_ptr_find(&unk_100014210);
  if ( v8 )
  {
    v4 = *(_BYTE *)(a1 + 79);
    a2 = v8 - qword_100014228;
    if ( v8 != qword_100014228 )
      goto LABEL_3;
  }
  else
  {
    a2 = 0LL;
    v4 = *(_BYTE *)(a1 + 79);
  }
  v6 = 1;
LABEL_12:
  v9 = v4 & 0xF;
  if ( v9 <= 4 )
  {
    if ( v9 != 3 )
    {
      if ( v9 != 4 || (*(_DWORD *)(a1 + 56) & 0x80000000) != 0 )
        goto LABEL_38;
      LODWORD(v24[0]) = bswap32(*(_DWORD *)(a1 + 64));
      if ( write_NOCANCEL() != 4 )
      {
        close_NOCANCEL(*(unsigned int *)(a1 + 56));
        *(_DWORD *)(a1 + 56) = -1;
        return;
      }
      goto LABEL_37;
    }
    v12 = *(unsigned int *)(a1 + 56);
LABEL_42:
    if ( ((anonymous0 ^ (2 * anonymous0)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    sub_100006944(a1, a3, v12);
    return;
  }
  switch ( v9 )
  {
    case 7u:
      if ( (v6 & 1) != 0 )
        return;
      v11 = *(_QWORD *)(a2 + 24);
      if ( !v11 )
        return;
      v12 = *(unsigned int *)(v11 + 8);
      goto LABEL_42;
    case 6u:
      v13 = xpc_dictionary_create(0LL, 0LL, 0LL);
      xpc_dictionary_set_string(v13, "Notification", *(const char **)(*(_QWORD *)(a1 + 48) + 8LL));
      v14 = os_set_64_ptr_find(&unk_1000141B0, *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL));
      if ( v14 && qword_1000141C8 != v14 )
        xpc_dictionary_set_uint64(v13, "_State", *(_QWORD *)(v14 - qword_1000141C8 + 24));
      v15 = xpc_event_publisher_fire_noboost(qword_100014250, *(_QWORD *)(a1 + 56), v13);
      xpc_release(v13);
      if ( !v15 )
        goto LABEL_37;
      if ( v15 == 55 && (*(_BYTE *)(a1 + 80) & 1) == 0 )
      {
        *(_BYTE *)(a1 + 80) = 1;
        memset(v24, 0, sizeof(v24));
        if ( (unsigned int)xpc_get_service_identifier_for_token(*(_QWORD *)(a1 + 56), v24) )
        {
          has_internal_diagnostics = os_variant_has_internal_diagnostics("libnotify.simulate_crash");
          if ( (_DWORD)has_internal_diagnostics )
            sub_100006474(has_internal_diagnostics, v17, v18, v19, v20, v21, v22, v23, (__int64)v24);
        }
      }
      break;
    case 5u:
      v10 = *(_DWORD *)(a1 + 68);
      if ( !v10 )
        v10 = getpid();
      if ( !kill(v10, *(_DWORD *)(a1 + 56)) )
      {
LABEL_37:
        v4 = *(_BYTE *)(a1 + 79);
        goto LABEL_38;
      }
      break;
    default:
LABEL_38:
      v7 = v4 & 0x3F;
      goto LABEL_39;
  }
}
