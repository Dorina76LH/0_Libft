/*
memset – fill a byte string with a byte value
writes len bytes of value c (converted to an unsigned char) to the string b
The memset() function returns its first argument.
- convertir '*b' en unsigned char * pour acceder a la memoire octet par octet
- convertir 'c' en unsigned char pour s'assurer qu'elle reste un seul octet (0-255)
*/

#include <string.h>

void *memset(void *b, int c, size_t len)
{
    unsigned char *ptr = (unisgned char *)b;
    unsigned char value = (unisgned char)c;
    size_t i = 0;
    
    while(i < len)
    {
    *ptr = value;
    ptr++;
    i++;
    }
    return (b)
}