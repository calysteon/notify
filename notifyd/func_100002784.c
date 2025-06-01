// Pseudocode for function at 0x100002784
__int64 __fastcall sub_100002784(const char *a1, __int64 a2, _DWORD *a3, mach_port_name_t *a4, __int128 *a5)
{
  __int128 v10; // q1
  __int64 result; // x0
  __int128 v12[2]; // [xsp+0h] [xbp-70h] BYREF
  mach_port_options_t options; // [xsp+20h] [xbp-50h] BYREF
  mach_port_name_t name; // [xsp+3Ch] [xbp-34h] BYREF

  name = 0;
  *a3 = 0;
  *a4 = 0;
  *(_OWORD *)&options.flags = xmmword_10000BD08;
  options.reserved[1] = 0LL;
  if ( mach_port_construct(mach_task_self_, &options, 0LL, &name) )
    __assert_rtn("__notify_server_register_mach_port_3", "notify_proc.c", 1843, "kstatus == KERN_SUCCESS");
  if ( mach_port_insert_right(mach_task_self_, name, name, 0x14u) )
    __assert_rtn("__notify_server_register_mach_port_3", "notify_proc.c", 1847, "kstatus == KERN_SUCCESS");
  v10 = a5[1];
  v12[0] = *a5;
  v12[1] = v10;
  result = sub_100001964(a1, a2, name, v12);
  *a3 = result;
  if ( (_DWORD)result )
    return mach_port_destruct(mach_task_self_, name, -1, 0LL);
  *a4 = name;
  return result;
}
