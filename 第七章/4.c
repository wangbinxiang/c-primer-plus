#include <stdio.h>
int main(void)
{
    char c;
    c = getchar();
    while(c != '\n')
    {
    if(c != '!' && c != '.')
        {
            putchar(c);
        }else if(c == '!')
        {
            putchar('!');
            putchar('!');
        }else
        {
            putchar('!');
        }
        c = getchar();
    }
    return 0;
}