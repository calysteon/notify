// Pseudocode for function at 0x10000BBC4
void __cdecl xpc_dictionary_set_uint64(xpc_object_t xdict, const char *key, uint64_t value)
{
  _xpc_dictionary_set_uint64(xdict, key, value);
}
