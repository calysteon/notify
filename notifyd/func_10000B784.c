// Pseudocode for function at 0x10000B784
kern_return_t __cdecl mach_port_request_notification(
        ipc_space_t task,
        mach_port_name_t name,
        mach_msg_id_t msgid,
        mach_port_mscount_t sync,
        mach_port_t notify,
        mach_msg_type_name_t notifyPoly,
        mach_port_t *previous)
{
  return _mach_port_request_notification(task, name, msgid, sync, notify, notifyPoly, previous);
}
