#include "main.h"
/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: - memory area copied to
 * @src: - memory area copied from
 * *@n: number of bytes
 *
 * Return:  a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        int r;
        int i = n;
        for (r = 0; r < i; r++)
        {
                dest[r] = src[r];
                n--;
        }
        return (dest);
}
