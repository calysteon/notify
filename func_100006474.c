// Pseudocode for function at 0x100006474
void __fastcall sub_100006474(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  int v9; // w0
  char *v10; // [xsp+8h] [xbp-8h] BYREF

  v10 = 0LL;
  if ( getpid() != 1 )
  {
    v9 = vasprintf(&v10, "BUG IN CLIENT OF NOTIFYD: %s has not dequeued the last %d messages", (__va_list_tag *)&a9);
    if ( v10 )
    {
      os_fault_with_payload(18LL, 2LL, v10, (unsigned int)(v9 + 1), v10, 0LL);
      free(v10);
    }
  }
}
