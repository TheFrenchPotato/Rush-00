#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void     print_long(int n)
{
    int     count;

    count = 1;
    if (n < 0)
    {
        n = 1;
    }

    while (count <= n)
    {
        if ((count == 1) || (count == n))
        {
            ft_putchar('o');
        }
        else
        {
            ft_putchar('-');
        }
        count++;
    }
}

void    print_ver(int n)
{
    int     count;

    count  = 1;
    while (count <= n)
    {
        if  ((count == 1) || (count == n))
        {
            ft_putchar('|');
        }
        else
        {
            ft_putchar(' ');
        }
        count++;
    }
    
}

void    rush(int x, int y)
{
    int     i;

    i = 1;
    while (i <= y)
    {  
        if ((i == 1) || (i == y))
        {
            print_long(x);
        }
        else
        {
            print_ver(x);
        }
        ft_putchar(10);
        i++;
    }   
}
