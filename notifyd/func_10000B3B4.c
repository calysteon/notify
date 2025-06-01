// Pseudocode for function at 0x10000B3B4
kern_return_t __cdecl bootstrap_check_in(mach_port_t bp, const name_t service_name, mach_port_t *sp)
{
  return _bootstrap_check_in(bp, service_name, sp);
}
