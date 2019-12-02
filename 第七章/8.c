#include<stdio.h>
#define Tex1 0.15
#define Tex2 0.20
#define Tex3 0.25
int main(void)
{
    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action\n");
    printf("1) $8.75/hr                       2) $9.33/hr \n");
    printf("3) $10.00/hr                      2) $11.20/hr \n");
    printf("5) quit\n");
    printf("*****************************************************************\n");
    int a;
    int time, overtime, wage, wage1, tex;
    float money;
    while(a = getchar())
    {
        if(a == '5')
        {
            printf("Wrong!\n");
            a = getchar();
        }else{
        switch (a)
            {
                case '1':
                    money = 8.75;
                    break;
                case '2':
                    money = 9.33;
                    break;
                case '3':
                    money = 10.00;
                    break;
                case '4':
                    money = 11.2;
                    break;  
            }
            printf("Enter the time: \n");
            scanf("%d",&time);
            if (time<= 40) {
                wage = time * money;
            } else {
                wage = (time - 40)*1.5* money + 40* money;
            }

            if (wage <= 300) {
                tex = wage * Tex1;
            } else if(wage <= 450) {
                tex = 300*0.15 + (wage - 300)* Tex2;
            } else {
                tex = 300*0.15 + 150* 0.2 + (wage-450)*Tex3;
            }
            wage1 = wage - tex;
            printf("the wage is %d,tex is %d, final wage is %d\n",wage, tex, wage1);
            printf("Enter the number: ");
            a = getchar();
        }   
    }
return 0;
}