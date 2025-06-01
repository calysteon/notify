// Pseudocode for function at 0x100005C74
char **__fastcall sub_100005C74(const char *a1, char **a2)
{
  char **v2; // x19
  unsigned int v4; // w21
  unsigned int v5; // w8
  unsigned int v6; // w22
  char **v7; // x8

  v2 = a2;
  if ( a1 )
  {
    if ( a2 )
    {
      v4 = -1;
      do
        v5 = v4++;
      while ( a2[v4] );
      v6 = v5 + 2;
      v2 = (char **)malloc_type_realloc(a2, 8LL * (v4 + 2), 0x10040436913F5LL);
      v2[v4] = strdup(a1);
      v7 = &v2[v6];
    }
    else
    {
      v2 = (char **)malloc_type_malloc(16LL, 0x10040436913F5LL);
      *v2 = strdup(a1);
      v7 = v2 + 1;
    }
    *v7 = 0LL;
  }
  return v2;
}
