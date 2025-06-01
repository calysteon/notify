// Pseudocode for function at 0x100006CEC
void __fastcall sub_100006CEC(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // w8
  char v4; // w8

  if ( !*(_BYTE *)(a1 + 78) || (v3 = *(_BYTE *)(a1 + 78) - 1, (*(_BYTE *)(a1 + 78) = v3) == 0) )
  {
    v4 = *(_BYTE *)(a1 + 79);
    *(_BYTE *)(a1 + 79) = v4 & 0x5F;
    if ( (v4 & 0x40) != 0 )
      sub_100006694(a1, a2, a3);
  }
}
