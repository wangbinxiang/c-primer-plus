#include <stdio.h>
int sumab(int a, int b);
int main(void)
{
    int a , b, sum;
    printf("Enter lower and upper integer limits: ");
    scanf("%d %d", &a, &b);
    
    while(a < b)
    {
        printf("the sums of the squares from %d to %d is %d\n" , a*a, b*b, sum = sumab(a , b)); 
        printf("Enter lower and upper integer limits: ");
        scanf("%d %d", &a, &b);
        
    } 
    printf("done");
    return 0;
}

int sumab(int a, int b)
{
    int sum;
    for( sum = 0; a <= b ; a++)
        {
            sum = a * a + sum;
        }
    return sum;
}