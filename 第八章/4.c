#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main()
{
    int ch;
    int n_char = 0;
    int n_word = 0;
    int m;
    bool inword = false;
    while((ch = getchar()) != EOF)
    {
        if(!isspace(ch) && !ispunct(ch))
            n_char++;
        if(!isspace(ch) && !inword)
        {
            inword = true;
            n_word ++;
        }
        if(isspace(ch) && inword)
            inword = false;
    }
    m = n_char/n_word;
    printf("平均字母数为 %d",m);
    return 0;
}