// Pseudocode for function at 0x10000B794
kern_return_t __cdecl mach_port_set_attributes(
        ipc_space_t task,
        mach_port_name_t name,
        mach_port_flavor_t flavor,
        mach_port_info_t port_info,
        mach_msg_type_number_t port_infoCnt)
{
  return _mach_port_set_attributes(task, name, flavor, port_info, port_infoCnt);
}
