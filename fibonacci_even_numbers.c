#include <stdio.h>
#include <unistd.h>

int fibonacci(int n)
{
    if (n == 1 || n == 0 || n < 0)
        return 1;
    return (fibonacci(n - 1) + fibonacci(n - 2));
}

int main()
{
    int i;
    int sum_even;

    sum_even = 0;
    i = 0;
    while (fibonacci(i) < 4000000)
    {
        if (fibonacci(i) % 2 == 0)
        {
        sum_even = fibonacci(i) + sum_even; 
        }
        i++;
    }
    printf("%d\n", sum_even);
    return (0);
}