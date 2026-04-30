#include <string.h>

void	*memset(void *s, int c, size_t n)
{
    unsigned char   *p;
    unsigned char   q;

    p = (unsigned char  *)s;
    q = (unsigned char)c;
    while (n > 0)
    {
        *p = q;
        p++;
        n--;
    }
    return (s);
}
