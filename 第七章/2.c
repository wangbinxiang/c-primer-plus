#include <stdio.h>
#define STOP '#'
int main(void)
{
    char c;
    int n = 0;
    c = getchar();
    while(c != STOP )
    {
        putchar(c);
        printf(" %d ",c);
        n++;
        if (n % 8 == 0)
            printf("\n");
        c = getchar();        
    }
    return 0;
}