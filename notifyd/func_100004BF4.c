// Pseudocode for function at 0x100004BF4
FILE *sub_100004BF4(FILE *result, const char *a2, ...)
{
  FILE *v3; // x20
  tm *v4; // x0
  time_t v5; // [xsp+18h] [xbp-58h] BYREF
  char v6[16]; // [xsp+20h] [xbp-50h] BYREF
  __int128 v7; // [xsp+30h] [xbp-40h]
  va_list va; // [xsp+80h] [xbp+10h] BYREF

  va_start(va, a2);
  if ( dword_1000142F8 >= (int)result )
  {
    result = (FILE *)qword_100014308;
    if ( qword_100014308 )
    {
      result = fopen((const char *)qword_100014308, "a");
      if ( result )
      {
        v3 = result;
        v5 = time(0LL);
        *(_OWORD *)v6 = 0u;
        v7 = 0u;
        v4 = localtime(&v5);
        strftime(v6, 0x20uLL, "%b %e %T", v4);
        fprintf(v3, "%s: ", v6);
        vfprintf(v3, a2, (__va_list_tag *)va);
        fflush(v3);
        return (FILE *)fclose(v3);
      }
    }
  }
  return result;
}
