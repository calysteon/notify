// Pseudocode for function at 0x10000B744
kern_return_t __cdecl mach_port_construct(
        ipc_space_t task,
        mach_port_options_ptr_t options,
        mach_port_context_t context,
        mach_port_name_t *name)
{
  return _mach_port_construct(task, options, context, name);
}
