// Pseudocode for function at 0x100005F2C
void __cdecl sub_100005F2C(id a1)
{
  FILE *v1; // x0
  FILE *v2; // x19
  __int64 _18; // [xsp+18h] [xbp+8h]

  unlink("/var/run/notifyd_jetsam.log");
  v1 = fopen("/var/run/notifyd_jetsam.log", "w");
  if ( v1 )
  {
    v2 = v1;
    if ( (fprintf(v1, "-- JETSAM LOG BEGIN ---\n") & 0x80000000) == 0 )
    {
      sub_10000375C(v2);
      if ( (fprintf(v2, "-- JETSAM LOG END ---\n") & 0x80000000) == 0 )
      {
        if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        fclose(v2);
      }
    }
  }
}
