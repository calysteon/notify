// Pseudocode for function at 0x10000B724
mach_msg_return_t __cdecl mach_msg(
        mach_msg_header_t *msg,
        mach_msg_option_t option,
        mach_msg_size_t send_size,
        mach_msg_size_t rcv_size,
        mach_port_name_t rcv_name,
        mach_msg_timeout_t timeout,
        mach_port_name_t notify)
{
  return _mach_msg(msg, option, send_size, rcv_size, rcv_name, timeout, notify);
}
