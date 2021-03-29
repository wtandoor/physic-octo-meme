#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int sum;
    int i;

    i = 0;
    sum = 0;
    while (i < 1000)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            sum = sum + i;
        }
        else if (i % 3 == 0)
        {
            sum = sum + i;
        }
        else if (i % 5 == 0)
        {
            sum = sum + i;
        }
        i++;
    }
    printf("%d", sum);
    return (0);
}