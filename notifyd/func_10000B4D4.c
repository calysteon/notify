// Pseudocode for function at 0x10000B4D4
dispatch_source_t __cdecl dispatch_source_create(
        dispatch_source_type_t type,
        uintptr_t handle,
        unsigned __int64 mask,
        dispatch_queue_t queue)
{
  return _dispatch_source_create(type, handle, mask, queue);
}
