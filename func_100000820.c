// Pseudocode for function at 0x100000820
__int64 __fastcall sub_100000820(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(a1 + 32) + 16LL))(
           *(_QWORD *)(a1 + 32),
           a2 - *(_QWORD *)(*(_QWORD *)(a1 + 40) + 24LL));
}
