// Pseudocode for function at 0x1000083F8
void __fastcall sub_1000083F8(__int64 a1)
{
  __int64 v1; // x19
  dispatch_source_s *v2; // x20
  unsigned __int64 v3; // x21
  stat v4; // [xsp+0h] [xbp-B0h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 )
  {
    v2 = *(dispatch_source_s **)(v1 + 48);
    if ( v2 )
    {
      if ( dispatch_source_testcancel(*(dispatch_source_t *)(v1 + 48)) )
        return;
      LODWORD(v2) = dispatch_source_get_data(v2);
    }
    memset(&v4, 0, sizeof(v4));
    if ( !fstat(*(_DWORD *)(v1 + 12), &v4) )
    {
      if ( *(_OWORD *)(v1 + 16) != *(_OWORD *)&v4.st_mtimespec )
      {
        LODWORD(v2) = (unsigned int)v2 | 0x100;
        *(timespec *)(v1 + 16) = v4.st_mtimespec;
      }
      if ( *(_OWORD *)(v1 + 32) != *(_OWORD *)&v4.st_ctimespec )
      {
        LODWORD(v2) = (unsigned int)v2 | 0x200;
        *(timespec *)(v1 + 32) = v4.st_ctimespec;
      }
    }
    if ( ((unsigned __int8)v2 & 1) != 0 )
      *(_DWORD *)(v1 + 8) = 2;
    if ( *(_DWORD *)(v1 + 56) )
    {
      v3 = 0LL;
      do
        sub_100007894(*(_QWORD *)(*(_QWORD *)(v1 + 64) + 8 * v3++), (int)v2, (const char **)v1);
      while ( v3 < *(unsigned int *)(v1 + 56) );
    }
  }
}
