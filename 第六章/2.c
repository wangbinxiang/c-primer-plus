#include <stdio.h>
#define s 26
int main(void) 
{
    char a[s];
    int j;
    int i;

    for (i = 0,j = 97; i <= 25 ; i++, j++) {
        a[i] = j;
        printf("%c", a[i]);
    }

    return 0;
}
