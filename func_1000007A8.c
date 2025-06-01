// Pseudocode for function at 0x1000007A8
__int64 __fastcall sub_1000007A8(__int64 a1)
{
  __int64 v2[6]; // [xsp+0h] [xbp-30h] BYREF

  v2[0] = (__int64)_NSConcreteStackBlock;
  v2[1] = 1107296256LL;
  v2[2] = (__int64)sub_100000820;
  v2[3] = (__int64)&unk_100010578;
  v2[4] = a1;
  v2[5] = (__int64)&unk_1000141D0;
  return os_set_64_ptr_foreach(&unk_1000141D0, v2);
}
