#include <stdio.h>
int main(void)
{
    int num[7];
    int i;
    int j = 0;
    for(i = 1, num[0] = 2; i<8 ;i++)
    {
        num[i] = 2 * num[i - 1];
    }
    do
    {
        //int j = 0;
        printf("num[%d]=%d  ", j, num[j]);
    }while( ++j < 8);
    return 0;
}