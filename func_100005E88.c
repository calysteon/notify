// Pseudocode for function at 0x100005E88
void __cdecl sub_100005E88(id a1)
{
  __int64 v1[6]; // [xsp+0h] [xbp-40h] BYREF

  v1[0] = (__int64)_NSConcreteStackBlock;
  v1[1] = 1107296256LL;
  v1[2] = (__int64)sub_100000770;
  v1[3] = (__int64)&unk_100010548;
  v1[4] = (__int64)&stru_100010860;
  v1[5] = (__int64)&unk_100014190;
  os_set_str_ptr_foreach(&unk_100014190, v1);
  qword_1000142D0 = time(0LL);
}
