#include <stdio.h>
#include <limits.h>

void    binary(unsigned char a)
{
    int i = 8;
    
    while(i --> 0)
        printf("%d", (a >> i) & 1);
}
void    ft_print_binary(unsigned char *p, size_t size)
{
    int tab[size];
    int x;
    
    x = size;
    while (x --> 0)
    {
        tab[x] = *p;
        p++;
    }
    x = 0;
    while (x < size)
    {
        binary(tab[x]);
        printf(" ");
        x++;
    }
}

int main() {
    char *s = "1111111111111";
    ft_print_binary(s, sizeof(*s) * 13);
    return 0;
}
