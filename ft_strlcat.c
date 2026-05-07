size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  dst_len;
    size_t  str_len;
    size_t  i;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    if (dst_len >= dstsize)
        return (src_len + dstsize);
    dst += dst_len;
    i = dst_len
    while (i < dstsize - 1)
    {
    }
}
