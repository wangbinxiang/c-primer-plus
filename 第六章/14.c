#include<stdio.h>
#include<math.h>
int main(void)
{
    int i, m;
    int da, de;
    
    for( m = 1, de = 100; ; m++)
    {
        da = 100 * 0.1 * m + 100;
        de = de + de * 0.05;
        i = da - de;
    }while(i < 0);
    printf("%d,%d,%d",m,da,de);
    return 0;

}