// Pseudocode for function at 0x100005F1C
bool __cdecl sub_100005F1C(id a1, void *a2)
{
  int v2; // w8

  v2 = *((_DWORD *)a2 + 16);
  *((_DWORD *)a2 + 16) = 0;
  *((_DWORD *)a2 + 17) = v2;
  return 1;
}
