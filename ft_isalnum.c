int     ft_isalnum(char c)
{
    if (c > 47 && c < 58 || c > 64 && c < 91 || c > 96 && c < 123)
        return 1024;
    return 0;
}