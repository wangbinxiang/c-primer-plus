#include <stdio.h>
#define STOP '0'
int main(void)
{
    int num,y;
    int sum_o = 0, sum_j = 0;
    int o = 0;
    int j = 0;
    float ave_o, ave_j;
    
    printf("enter some numbers\n");
    while (scanf("%d", &num) == 1)
    {
        if(num != 0)
        {
            y = num % 2;
            switch(y)
            {
                case 0:
                    o++;
                    sum_o += num;
                    ave_o = sum_o / o;
                    break;
                case 1:
                    j++;
                    sum_j += num;
                    ave_j = sum_j / j;
                    break;
            }
        }else
        break;
    }
    printf("%d 偶数，平均值是 %f, %d 奇数，平均值是 %f", o, ave_o, j, ave_j);
    return 0;
}
