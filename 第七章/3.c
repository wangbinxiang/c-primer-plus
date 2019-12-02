#include <stdio.h>
#define STOP '0'
int main(void)
{
    int num;
    int sum_o = 0, sum_j = 0;
    int o = 0;
    int j = 0;
    float ave_o, ave_j;
    
    printf("enter some numbers\n");
    while (scanf("%d", &num) == 1)
    {
        if(num != 0)
        {
            printf("输入数字 %d \n", num);
            if(num % 2 == 0)
            {
                o++;
                printf("o: %d \n", o);
                sum_o = sum_o + num;
                printf("sum_o: %d \n", sum_o);
                ave_o = sum_o / o;
                printf("ave_o: %f \n", ave_o);
            }
            else
            {
                j++;
                printf("j: %d \n", j);
                sum_j = sum_j + num;
                printf("sum_j: %d \n", sum_j);
                ave_j = sum_j / j;
                printf("ave_j: %f \n", ave_j);
            }
        } else {
            break;
        }
    }
    printf("%d 偶数，平均值是 %f, %d 奇数，平均值是 %f", o, ave_o, j, ave_j);
    return 0;
}