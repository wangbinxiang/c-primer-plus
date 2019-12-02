#include <stdio.h>
int main(void)
{
    float n , sum;
    int a , b , c, d;
    printf("a=+_1 , b=max\n");
    scanf("%d %d",&a,&b);
    //printf("sum = sum + %d * (%d \% 2)")
    for( n = 1, c = 3 ; n <= b; n++ , c++)
    {
        d = a * ( c % 2 + 2)/2;
        sum = sum + d *(1.0/n); 
    }
    printf("%d \n %f", d , sum);
    return 0;
}