#include "libft.h"

char    *ft_substr(const char *s, unsigned int start, size_t len)
{
    unsigned char   *sub;
    size_t          s_len;

    if (!s)
        return (NULL);
    s_len = ft_strlen(s);
    if (start >= s_len)
    {
        sub = malloc(1);
        if (!sub)
            return (NULL);
        sub[0] = '\0';
        return ((char *)sub);
    }
    sub = malloc(sizeof(char) * (s_len + 1));
    if (!sub)
        return (NULL);
    s += start;
    while (s_len != 0)
    {
        *sub = *s;
        sub++;
        s++;
        s_len--;
    }
    *sub = '\0';
    return ((char *)sub);
}
//文字列から数文字引き出して返す関数だから文字数を測るstrlenでおっけー
