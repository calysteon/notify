// Pseudocode for function at 0x10000B544
void __cdecl dispatch_source_set_timer(
        dispatch_source_t source,
        dispatch_time_t start,
        uint64_t interval,
        uint64_t leeway)
{
  _dispatch_source_set_timer(source, start, interval, leeway);
}
