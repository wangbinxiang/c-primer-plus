#include <stdio.h>
int main(void)
{
    char c, prev;
    int n=0;
    
    while((c = getchar()) != '#')
    {
        if(c == 'i')
        {
            if(prev == 'e')
            {
                n++;
            }
        }
        prev = c;
    }
    printf("%d \n",n);
    return 0; 
}
       
