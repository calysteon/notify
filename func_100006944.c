// Pseudocode for function at 0x100006944
__int64 __fastcall sub_100006944(__int64 a1, __int64 a2, mach_port_t a3)
{
  __int64 v4; // x20
  char v6; // w22
  __int64 v7; // x0
  __int64 result; // x0
  char v9; // w8
  mach_msg_option_t v10; // w1
  mach_msg_id_t v11; // w8
  mach_msg_header_t msg; // [xsp+8h] [xbp-48h] BYREF

  v4 = a2;
  if ( a2 )
    goto LABEL_2;
  v7 = os_set_32_ptr_find(&unk_1000141F0);
  if ( !v7 )
  {
    v4 = 0LL;
LABEL_9:
    v6 = 1;
    goto LABEL_10;
  }
  v4 = v7 - qword_100014208;
  if ( v7 == qword_100014208 )
    goto LABEL_9;
LABEL_2:
  if ( (*(_BYTE *)(v4 + 12) & 1) != 0 )
  {
    result = 0LL;
    ++*(_BYTE *)(a1 + 78);
    v9 = *(_BYTE *)(a1 + 79) | 0x60;
LABEL_18:
    *(_BYTE *)(a1 + 79) = v9;
    return result;
  }
  v6 = 0;
LABEL_10:
  if ( (dword_100014258 & 2) != 0 )
    v10 = 145;
  else
    v10 = 17;
  *(_QWORD *)&msg.msgh_bits = 0x1800000013LL;
  msg.msgh_remote_port = a3;
  msg.msgh_local_port = 0;
  v11 = *(_DWORD *)(a1 + 64);
  msg.msgh_voucher_port = 0;
  msg.msgh_id = v11;
  result = mach_msg(&msg, v10, 0x18u, 0, 0, 0, 0);
  if ( !(_DWORD)result )
  {
    v9 = *(_BYTE *)(a1 + 79) & 0x3F;
    goto LABEL_18;
  }
  if ( (_DWORD)result != 268435460 )
    return 46LL;
  mach_msg_destroy(&msg);
  if ( (dword_100014258 & 2) == 0 )
    return 45LL;
  ++*(_BYTE *)(a1 + 78);
  *(_BYTE *)(a1 + 79) |= 0xE0u;
  result = 0LL;
  if ( (v6 & 1) == 0 )
    *(_DWORD *)(v4 + 12) |= 1u;
  return result;
}
