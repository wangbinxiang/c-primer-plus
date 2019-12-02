#include <stdio.h>
#include <ctype.h>
int main()
{
    int ch;
    int d = 0, x = 0;
    while((ch=getchar()) != EOF)
    {
        if(islower(ch))
            x++;
        else if(isupper(ch))
            d++;
    }
    printf("小写字母共有 %d个，大写字母共有 %d个",x,d);
    return 0;
}