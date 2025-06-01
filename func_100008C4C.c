// Pseudocode for function at 0x100008C4C
_DWORD *__fastcall sub_100008C4C(_DWORD *result, __int64 a2)
{
  if ( (*result & 0x80000000) == 0 && result[1] == 36 )
    sub_100004E88();
  *(_DWORD *)(a2 + 32) = -304;
  *(NDR_record_t *)(a2 + 24) = NDR_record;
  return result;
}
