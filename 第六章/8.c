#include <stdio.h>
#include <math.h>
void wtf(float a , float b ,float x);
int main(void)
{
    float a , b ;
    float x , WTF;
    
    printf("input something\n");
    while(scanf("%f %f", &a, &b) != 2)
    {
        printf("wrong!input 2 number!");
        // scanf("%f %f", &a , &b);
        getchar();
    }
    
    wtf(a, b, x);

    return 0;
}

void wtf(float a , float b , float x)
{
    x = ( a - b ) / ( a * b );
    printf("%f ", x);
}
    
