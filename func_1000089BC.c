// Pseudocode for function at 0x1000089BC
_DWORD *__fastcall sub_1000089BC(_DWORD *result, __int64 a2)
{
  __int64 v3; // x20
  __int64 v4; // x0
  unsigned int *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x22
  unsigned int v8; // w8

  if ( (*result & 0x80000000) != 0 || result[1] != 36 )
  {
    *(_DWORD *)(a2 + 32) = -304;
    *(NDR_record_t *)(a2 + 24) = NDR_record;
    return result;
  }
  v3 = (unsigned int)result[8];
  v4 = os_set_32_ptr_find(&unk_1000141F0);
  if ( v4 )
    v5 = (unsigned int *)(v4 - qword_100014208);
  else
    v5 = 0LL;
  v6 = *(_QWORD *)v5;
  if ( *(_QWORD *)v5 )
  {
    do
    {
      v7 = *(_QWORD *)(v6 + 32);
      sub_1000008E4(v6);
      v6 = v7;
    }
    while ( v7 );
  }
  v8 = v5[3];
  if ( (v8 & 2) == 0 )
    goto LABEL_13;
  if ( (v8 & 4) != 0 )
  {
    sub_100004BF4((FILE *)7, "do_mach_notify_dead_name freed port %x\n", v3);
LABEL_13:
    sub_100000A10(v5);
    goto LABEL_14;
  }
  v5[3] = v8 | 4;
LABEL_14:
  result = (_DWORD *)mach_port_deallocate(mach_task_self_, v3);
  *(_DWORD *)(a2 + 32) = 0;
  return result;
}
