#include <stdio.h>
#include <unistd.h>

int find_sum_of_squares(int n);
int find_square(int n);

int main()
{
    int n;
    int diff;

    n = 100;
    diff =find_sum_of_squares(n) - find_square(n);
    printf("%d", diff);
    return (0);
}

int find_sum_of_squares(int n)
{
    int i;
    int sum;

    i = 0;
    sum = 0;
    while (i <= n)
    {
        sum = i + sum;
        i++;
    }
    return (sum * sum);
}

int find_square(int n)
{
    int sum;
    int i;

    i = 0;
    sum = 0;
    while (i <= n)
    {
        sum = i * i + sum;
        i++;
    }
    return (sum);
}