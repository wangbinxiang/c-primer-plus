#include <stdio.h>
int main(void)
{
    int m , n ;
    char a ;
    for (m = 0 ;m <= 5;m++)
    {
        for(n = 0 , a =70 ; n <= m ; n++ ,a--)
        {
            printf( "%c", a );
        }
        printf("\n");
    }
    return 0;

}