#include <stdio.h>
#include <unistd.h>

int check_prime(int i);

int main()
{
    int i;
    int j;

    j = 1;
    i = 2;
    while (j <= 10001)
    {
        if (check_prime(i) == 1)
        {
            j++;
        }
        i++;
    }
    i--;
    printf ("%d",i);
    return (0);
}

int check_prime(int i)
{
    int n;
    n = 2;
    while (n < i)
    {
        if (i % n == 0)
        {
            return (0);
        }
        n++;
    }
    if (n == i)
        return (1);
    return (0);
}
