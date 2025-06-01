// Pseudocode for function at 0x100008AE8
_DWORD *__fastcall sub_100008AE8(_DWORD *result, __int64 a2)
{
  if ( (*result & 0x80000000) == 0 && result[1] == 36 )
    sub_100004EC8();
  *(_DWORD *)(a2 + 32) = -304;
  *(NDR_record_t *)(a2 + 24) = NDR_record;
  return result;
}
