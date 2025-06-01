// Pseudocode for function at 0x10000B584
dispatch_time_t __cdecl dispatch_walltime(const timespec *when, int64_t delta)
{
  return _dispatch_walltime(when, delta);
}
