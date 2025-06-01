// Pseudocode for function at 0x100008520
void __cdecl sub_100008520(id a1)
{
  char __s[1024]; // [xsp+8h] [xbp-418h] BYREF

  qword_100014068 = 0LL;
  qword_100014070 = 0LL;
  if ( realpath_DARWIN_EXTSN("/var/db/timezone/zoneinfo", __s) )
  {
    qword_100014070 = strlen(__s);
    qword_100014068 = (__int64)strdup(__s);
    if ( !qword_100014068 )
      qword_100014070 = 0LL;
  }
}
