// Pseudocode for function at 0x100006FDC
__int64 __fastcall sub_100006FDC(const char *a1, __int64 a2, unsigned int a3, int a4, __int64 a5, int a6, _QWORD *a7)
{
  __int64 result; // x0
  __int64 v10; // x8
  char v11; // w10
  __int64 v12; // x9
  char v13; // w10
  __int64 v14; // [xsp+8h] [xbp-18h] BYREF

  if ( !a1 )
    return 1LL;
  v14 = 0LL;
  result = sub_100006DB0(a1, a2, a3, a5, a6, &v14);
  if ( !(_DWORD)result )
  {
    v10 = v14;
    v11 = *(_BYTE *)(v14 + 79) & 0xF0;
    v12 = *(_QWORD *)(v14 + 48);
    if ( a4 == -1 )
    {
      v13 = v11 | 2;
    }
    else
    {
      v13 = v11 | 1;
      *(_DWORD *)(v12 + 52) = a4;
    }
    result = 0LL;
    *(_BYTE *)(v10 + 79) = v13;
    *a7 = *(_QWORD *)(v12 + 16);
  }
  return result;
}
