// Pseudocode for function at 0x10000B474
void __cdecl dispatch_once(dispatch_once_t *predicate, dispatch_block_t block)
{
  _dispatch_once(predicate, block);
}
