#include<stdio.h>
#define Tex1 0.15
#define Tex2 0.20
#define Tex3 0.25
int main(void)
{
    int time, overtime, wage, wage1, tex;
    scanf("%d",&time);
    if (time<= 40) {
        wage = time * 10;
    } else {
        wage = (time - 40)*1.5*10 + 400;
    }

    if (wage <= 300) {
        tex = wage * Tex1;
    } else if(wage <= 450) {
        tex = 300*0.15 + (wage - 300)* Tex2;
    } else {
        tex = 300*0.15 + 150* 0.2 + (wage-450)*Tex3;
    }
    wage1 = wage - tex;
    printf("the wage is %d,tex is %d, final wage is %d",wage, tex, wage1);
    return 0;
}