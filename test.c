#include <stdio.h>
#include <unistd.h>

int main()
{
    int i;
    char a;

    a = 'a';
    write (1, &a , 1); 

    return (0);
}