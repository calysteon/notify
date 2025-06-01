// Pseudocode for function at 0x10000B764
kern_return_t __cdecl mach_port_destruct(
        ipc_space_t task,
        mach_port_name_t name,
        mach_port_delta_t srdelta,
        mach_port_context_t guard)
{
  return _mach_port_destruct(task, name, srdelta, guard);
}
