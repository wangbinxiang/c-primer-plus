#include <stdio.h>
#include <string.h>
int main(void)
{
    char letter[30];
    int m , n ;

    printf("Please input a lette\n");
    scanf("%s", letter);
    m = strlen(letter);
    printf("%d \n",m);
    for( n = m - 1 ; n >= 0 ; n--)
    {
        printf("%c",letter[n]);
    }
    return 0;
}