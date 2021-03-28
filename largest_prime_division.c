#include <stdio.h>
#include <unistd.h>

void search_the_largest_prime_division(unsigned long long int n);

int main()
{
    unsigned long long int n = 600851475143;
    search_the_largest_prime_division(n);
    return (0);
}

void search_the_largest_prime_division(unsigned long long int n)
{
    int i;
    int a;

    a = 0;
    i = 1;
    while (i <= n)
    {
        if (n % i == 0 && i != 1)
        {
            n = n / i;
            if (i > a)
                a = i;
            i = 0;
        }
        i++;
    }
    printf("%d", a);
}
