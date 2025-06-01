// Pseudocode for function at 0x100008B28
__int64 __fastcall sub_100008B28(__int64 result, __int64 a2)
{
  int v2; // w8

  if ( (*(_DWORD *)result & 0x80000000) != 0 && *(_DWORD *)(result + 24) == 1 && *(_DWORD *)(result + 4) == 40 )
  {
    if ( *(unsigned __int16 *)(result + 38) << 16 == 0x100000 )
      sub_100004EA8();
    v2 = -300;
  }
  else
  {
    v2 = -304;
  }
  *(_DWORD *)(a2 + 32) = v2;
  *(NDR_record_t *)(a2 + 24) = NDR_record;
  return result;
}
