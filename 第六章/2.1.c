#include <stdio.h>
#define s 26
int main(void)
{
    char a[s];
    int i , j ;
    for(i = 0, j = 97 ; i <= 35 ; i++ , j++)
       {
           a[i] = j;
            printf("%c" , a[i]);
       }
        

}