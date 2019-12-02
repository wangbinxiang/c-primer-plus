#include <stdio.h>
int main(void)
{
    int num[20];
    int i;
    printf("please enter 8 numbers:\n");
    for(i = 0; i < 8 ;i++)
    {
        scanf("%d", &num[i]);
    }
    for(i = 7; i >=0; i--)
    {
        printf("%d,",num[i]);
    }
    return 0;
}