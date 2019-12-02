#include <stdio.h>
int main(void)
{
    char c, prev, next;
    int n=0;
    prev = getchar();
    while((prev = getchar()) != '#')
    {
        if(prev == 'e')
        {
            c = getchar();
            if(c == 'i')
            {
            n++;
            }else{
            continue;
            }
        }else{
            c = getchar();
            if (c == 'e')
            {
                next = getchar();
                if( next == 'i')
                {
                    n++;
                }else
                continue;
            }
        }
    }
    printf("%d",n);
    return 0;
}