#include <stdio.h>
int main(void)
{
    long int a , b ;
    printf("Please input a min number \n");
    scanf("%ld", &a);
    printf("Please input a max number");
    scanf("%ld", &b);
    for(  ; a <= b ; a++ )
        {
            printf( "%ld  %ld  %ld ", a , a*a , a*a*a );
            printf("\n");
        }
}