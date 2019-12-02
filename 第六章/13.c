#include <stdio.h>
int main(void)
{
    int a[8], sum[8];
    int i, j , n, m;
    printf("Enter 8 number:\n");
    for(i = 0; i < 8;i++)
        scanf("%d", &a[i]);
    for(j = 1; j < 8; j++)
    {
        sum[0] = a[0];
        sum[j] = sum[j-1] + a[j];
    }
    for( m = 0 ; m < 8; m++)
    {
        printf("%5d", a[m]);
    }
    printf("\n");
    for( n = 0 ; n < 8; n++)
    {
        printf("%5d", sum[n]);
    }
    return 0;
}