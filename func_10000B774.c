// Pseudocode for function at 0x10000B774
kern_return_t __cdecl mach_port_insert_right(
        ipc_space_t task,
        mach_port_name_t name,
        mach_port_t poly,
        mach_msg_type_name_t polyPoly)
{
  return _mach_port_insert_right(task, name, poly, polyPoly);
}
