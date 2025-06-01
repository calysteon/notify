// Pseudocode for function at 0x100000660
__int64 __fastcall sub_100000660(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // x0

  result = os_set_32_ptr_delete();
  if ( result != a3 )
    __assert_rtn("_nc_table_delete_n", "table.c", 76, "os_set_delete(&t->set, key) == expected");
  return result;
}
