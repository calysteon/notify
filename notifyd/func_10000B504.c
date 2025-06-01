// Pseudocode for function at 0x10000B504
void __cdecl dispatch_source_set_cancel_handler(dispatch_source_t source, dispatch_block_t handler)
{
  _dispatch_source_set_cancel_handler(source, handler);
}
