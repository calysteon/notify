// Pseudocode for function at 0x10000083C
__int64 __fastcall sub_10000083C(mach_port_name_t name)
{
  __int64 result; // x0
  mach_port_t previous; // [xsp+1Ch] [xbp-4h] BYREF

  previous = 0;
  result = mach_port_request_notification(mach_task_self_, name, 66, 0, dword_100014288, 0x15u, &previous);
  if ( (_DWORD)result )
  {
    qword_100014010 = (__int64)"BUG IN LIBNOTIFY: Unable to arm send-possible";
    qword_100014040 = (int)result;
    __break(1u);
    goto LABEL_5;
  }
  if ( previous )
  {
LABEL_5:
    qword_100014010 = (__int64)"BUG IN LIBNOTIFY: send-possible already armed??";
    qword_100014040 = 0LL;
    __break(1u);
  }
  return result;
}
