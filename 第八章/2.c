#include <stdio.h>
int main()
{
    char ch;
    int i;
    for(i= 1 ; (ch= getchar()) != EOF; i++)
    {
        if( ch > ' '|| ch == '\n' || ch == '\t')
        printf("%-5c", ch);
        else printf("^%-4c", ch);
        printf("%-5d",ch);
        if( i%10 == 0)
        printf("\n");
    }
    return 0;
}
