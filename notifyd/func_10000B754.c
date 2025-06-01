// Pseudocode for function at 0x10000B754
kern_return_t __cdecl mach_port_deallocate(ipc_space_t task, mach_port_name_t name)
{
  return _mach_port_deallocate(task, name);
}
