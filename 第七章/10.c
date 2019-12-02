#include <stdio.h>
int main(void)
{
    printf("*****************************************************************\n");
    printf("Enter the number corresponding \n");
    printf("1) single                       2) household \n");
    printf("3) marride                      4) divorced \n");
    printf("*****************************************************************\n");
    int m, n, i, j;
    while(m = getchar())
    {
        switch(m)
        {
            case '1':
                i = 17850;
                printf("the base is 17850");
                break;
            case '2':
                i = 23900;
                printf("the base is 23900");                
                break;
            case '3':
                i = 29750;
                printf("the base is 29750");
                break;
            case '4':
                i = 14875;
                printf("the base is 14785");
        }
        printf("Enter your income: \n");
        scanf("%d",&n);

        if( n < i)
        {
            j = n * 0.15;
        }else{
            j = i * 0.15 + (n - i)*0.28;
        }
            printf("The tex is %d",j);
        
    return 0;
    }
}