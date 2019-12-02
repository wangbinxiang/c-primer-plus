#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '#'
int main(void)
{
    char c;
    long n_char = 0L;
    int n_space = 0;
    int n_line = 0;

    printf("Enter text to be analyzed(# to terminate): \n");
    while ( (c = getchar()) != STOP )
    {
        if (c == '\n')
            n_line++;
        if (isspace(c) && c != '\n')
            n_space++;
        if (c != '\n' && !isspace(c))
            n_char++;
    }
    printf("char = %ld,space = %d,line = %d",n_char, n_space, n_line );
    return 0;
}