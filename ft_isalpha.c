#include <stdio.h>
#include <ctype.h>

int     ft_isalpha(char c)
{
    if (c > 64 && c < 91 || c > 96 && c < 123)
        return 1024;
    return 0;
}

int main(void)
{
    char x = 'A';
    while (x <= 'z')
    {
        printf("%d -- %d \n", isalpha(x), ft_isalpha(x));
        x++;
    }
}