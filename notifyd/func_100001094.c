// Pseudocode for function at 0x100001094
__int64 __fastcall sub_100001094(__int64 a1, int a2)
{
  dispatch_source_s *v4; // x19
  __int64 result; // x0
  __int64 *v6; // x21
  __int64 v7; // x8

  v4 = dispatch_source_create(
         (dispatch_source_type_t)&_dispatch_source_type_proc,
         a2,
         0x80000000uLL,
         (dispatch_queue_t)qword_100014298);
  dispatch_source_set_event_handler_f(v4, (dispatch_function_t)sub_1000012E8);
  result = malloc_type_malloc(32LL, 0x10200407DCD39BELL);
  if ( result )
  {
    v6 = (__int64 *)result;
    ++dword_100014278;
    *(_QWORD *)result = 0LL;
    *(_QWORD *)(result + 8) = v4;
    *(_DWORD *)(result + 20) = 0;
    *(_DWORD *)(result + 16) = a2;
    *(_QWORD *)(result + 24) = 0LL;
    os_set_32_ptr_insert();
    if ( a1 )
    {
      v7 = *v6;
      *(_QWORD *)(a1 + 16) = *v6;
      if ( v7 )
        *(_QWORD *)(v7 + 24) = a1 + 16;
      *v6 = a1;
      *(_QWORD *)(a1 + 24) = v6;
    }
    dispatch_set_context(v4, v6);
    dispatch_source_set_cancel_handler_f(v4, (dispatch_function_t)sub_1000011B0);
    dispatch_activate(v4);
    return (__int64)v6;
  }
  else
  {
    qword_100014010 = (__int64)"BUG IN LIBNOTIFY: Unable to allocate portproc";
    __break(1u);
  }
  return result;
}
