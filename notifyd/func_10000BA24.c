// Pseudocode for function at 0x10000BA24
void (__cdecl *__cdecl signal(int a1, void (__cdecl *a2)(int)))(int)
{
  return _signal(a1, a2);
}
