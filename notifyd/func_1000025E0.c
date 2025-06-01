// Pseudocode for function at 0x1000025E0
__int64 __fastcall sub_1000025E0(_DWORD *a1, _DWORD *a2, _DWORD *a3, _OWORD *a4)
{
  __int128 v7; // q1
  __int64 result; // x0
  audit_token_t atoken; // [xsp+10h] [xbp-50h] BYREF
  pid_t pidp; // [xsp+3Ch] [xbp-24h] BYREF

  pidp = -1;
  ++*((_QWORD *)&xmmword_100014178 + 1);
  v7 = a4[1];
  *(_OWORD *)atoken.val = *a4;
  *(_OWORD *)&atoken.val[4] = v7;
  audit_token_to_au32(&atoken, 0LL, 0LL, 0LL, 0LL, 0LL, &pidp, 0LL, 0LL);
  sub_100004BF4(7LL, "__notify_server_checkin %d\n", (unsigned int)pidp);
  *a1 = 3;
  result = getpid();
  *a2 = result;
  *a3 = 0;
  return result;
}
