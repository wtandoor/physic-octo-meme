#include <stdio.h>
#include <unistd.h>

int main() // a < b; b < c; a < c;
{
    int a;
    int b;
    int c;

    a = 2;
    b = 2;
    c = 2;
    while (a < 1000)
    {
        b = a;
        while(b < 1000)
        {
            c = b;
            while (c < 1000)
            {
                if (a * a + b * b == c * c)
                {
                    if (a + b + c == 1000)
                    {
                        printf("%d\n",a);
                        printf("%d\n",b);
                        printf("%d\n",c);
                        return (0);
                    }
                }
                c++;
            }
            b++;
        }
        a++;
    }
    return (0);
}