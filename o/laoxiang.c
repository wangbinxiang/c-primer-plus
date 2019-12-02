#include <stdio.h>
#include <string.h>
#include <float.h>
//#define X 3.785/1.609
int main (void)
{
 /*   
    char firstname[40],secondname[40];
    printf("what's your first name?\n");
    scanf("%s",firstname);
    printf("what's your second name?\n");
    scanf("%s",secondname);
    printf("\"%*s \"", strlen(secondname)+3,secondname);
    


   float a;
   printf("please input a number\n");
   scanf("%f",&a);
   printf("The input is %+.3f or %+.3e",a,a);


    float height;
    printf("please input your height\n");
    scanf("%f",&height);
    printf("Dadney,you are %.3f feet tall",height);


    char firstname[20],secondname[20];
    printf("Please input your firstname\n");
    scanf("%s",firstname);
    printf("Please input your secondname\n");
    scanf("%s",secondname);
    printf("%s %s\n",secondname,firstname);
    printf("%-*d %-*d",strlen(secondname),strlen(secondname),strlen(firstname),strlen(firstname));

    double a = 1.0/3.0;
    float b = 1.0/3.0;
    printf("%.4f, %.12f, %.16f\n",a,a,a);
    printf("%.4f, %.12f, %.16f",b,b,b);
*/

    float mile, gallon;
    const float X = 3.785/1.609;
    printf("please input the mile and the gallon\n");
    scanf("%f %f", &mile, &gallon);
    float a = gallon / mile;
    printf("you waste %f gallon per mile\n", a); //为啥这里的a不用&a？？？
    printf("and you waste %f liter per Kilometer", a * X);



    return 0;


}