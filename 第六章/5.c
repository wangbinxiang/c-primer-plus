#include <stdio.h>
#define s 10
int main(void)
{
    int m , n , o , p ,i ;
    char ch , ch1 ,ch2 ;

    printf("Enter a lettes");
    scanf( "%c" , &ch );
    i = ch -64 ;
    for (m = 0 ;m < i ; m++)
    {
        for( n = i -m-1 ; n > 0 ; n --)
        {
            printf(" ");
        }
        for( o = 0 , ch1 = 65 ;o <= m ; o++, ch1++)
        {
            printf("%c", ch1);
        }
        for( p = 0 ,ch2 = 64+m ; p < m ; p++, ch2--)
        {
            printf("%c", ch2);
        }
        
        printf("\n");
    }
    return o;
}