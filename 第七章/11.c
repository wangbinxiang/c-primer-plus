#include <stdio.h>
int main(void)
{
    printf("*************************************************\n");
    printf("输入蔬菜种类 ,'q' to quite\n");
    printf("a 朝鲜咸 1.25$                     b 甜菜 0.65$ \n");
    printf("c 胡萝卜 0.89$                     q quite \n");
    printf("*************************************************\n");
    char m;
    float price_a = 1.25, price_b = 0.65, price_c = 0.89, lb_a = 0, lb_b = 0, lb_c = 0, lb = 0;//单价及磅数
    float cost_a = 0, cost_b = 0, cost_c =0, discount;//费用及折扣
    float cost;//订单价格
    float transport, order;//运输费及总价
    while((m = getchar()) != 'q')
    {
        switch(m)
        {
            case 'a':
            printf("朝鲜咸的单价是1.25$,输入要买的磅数:\n");
            scanf("%f", &lb_a);
            cost_a = price_a * lb_a;
            printf("你买了 %.2f 磅朝鲜咸，价格是%.2f \n",lb_a,cost_a);            
            printf("输入蔬菜种类 ,'q' to quite\n");
            m = getchar();
            break;
            case 'b':
            printf("甜菜的单价是 0.65$,输入要买的磅数:\n");
            scanf("%f", &lb_b);
            cost_b = price_b * lb_b;
            printf("你买了 %.2f 磅朝鲜咸，价格是%.2f \n",lb_b,cost_b);
            printf("输入蔬菜种类 ,'q' to quite\n");
            m = getchar();
            break;case 'c':
            printf("胡萝卜的单价是0.89$,输入要买的磅数:\n");
            scanf("%f", &lb_c);
            cost_c = price_c * lb_c;
            printf("你买了 %.2f 磅朝鲜咸，价格是%.2f \n",lb_c,cost_c);
            printf("Enter the number corresponding ,'q' to quite\n");
            m = getchar();
            break;
        }
    }
    cost = cost_a + cost_b + cost_c;
    discount = cost > 100? 0.05: 0;
    lb = lb_a + lb_b + lb_c;
    if(lb< 5)
        transport = 3.5;
        else if(lb < 20)
        transport = 10;
        else
        transport = 8 + lb* 0.1;
    order = cost * discount + transport;
    printf("订单总费用为 %.2f，折扣为 %.2f，运输费为 %.2f，费用总和为 %.2f",cost, discount, transport, order);
    return 0;

}