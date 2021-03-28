#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void search_the_largest_palindrome_number(void);
int check_palindrome(int res);

int main()
{
    search_the_largest_palindrome_number();
    return(0);    
}

void search_the_largest_palindrome_number(void)
{
    int large;
    int res; // самое большое число палиндром
    int i;  // итерация по первому числу
    int j;  // итерация по второму числу

    i = 700;
    while (i < 1000)
    {
        j = 700;
        while (j < 1000)
        {
            res = i * j;
            if (check_palindrome(res) == 1)
                large = res;
            j++;
        }
        i++;
    }
    printf("%d", large);
}

int check_palindrome(int res)
{
    char *massive;
    int m;
    int l;
    int z;

    z = 0;
    m = 0;
    l = 100000;
    massive = malloc(sizeof(char) * 6); // произведение самых больших трехзначных чисел  
    while (res > 9)
    {
        massive[m] = res / l + '0';
        res = res % l;
        l = l / 10;
        if (res / l == 0)
        {
            massive[m + 1] = '0';
             res = res % l;
            l = l / 10;
            m++;
        }
        m++;
    }
    massive[5] = res % 10 + '0';
    if ((massive[0] == massive[5]) && (massive[1] == massive[4]) && (massive[2] == massive[3]))
        z = 1;
    else
        z = 0;
    free(massive);
    return (z);
}