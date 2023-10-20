#include "main.h"

/**
 * get_endianness - checks the byte order of the system
 *
 * This function determines the endianness
 * of the system by creating
 * an integer variable 'value'
 * with the value 1 and examining the
 * first byte of its memory representation.
 * If the first byte is 1,
 * it means the system is little-endian;
 * otherwise, it is big-endian.
 *
 * Return:
 * - 0: If the system is big-endian.
 * - 1: If the system is little-endian.
 */
int get_endianness(void)
{
unsigned int value = 1;
char *byte_ptr = (char *) &value;

return (*byte_ptr == 1);
}

