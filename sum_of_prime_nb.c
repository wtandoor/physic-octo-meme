#include <stdio.h>
#include <unistd.h>

int check_prime_number(int n);

int main()
{
    int n;
    long long int j;
    int q;

    j = 0;
    n = 2;
    while (n < 2000000)
    {
        q = 0;
        q = check_prime_number(n);
        if (q == 1)
        {
            j = j + n;
        }
        n++;
    }
    printf("%d", j);
    return (0);
}

int check_prime_number(int n)
{
    int i;

    i = 2;
    if (i < n)
    {
        while (i < n)
        {
            if (n % i == 0)
            {
                return (0);
            }
            i++;
        }
    }
    if (i == n)
        return (1);
    return (0);
}