#include <stdio.h>
int main(void)
{
    int guess = 50;
    int max = 100, min = 0;
    char response;
    printf("Pick an integer from 1 to 100. I will try to guess it.\n");
    printf("Respond with a y if my guess is right with a d if it is bigger with a x if it is smaller\n");
    printf("is your number %d?", guess);
    while((response = getchar()) != 'y')
    {
        if (response == 'd')
        {
            max = guess;
            guess = (min + guess)/2;
            
            printf("is your number %d?", guess);
            response = getchar();
        }
        else if(response == 'x')
        {
            min = guess;
            guess = (max + guess)/2;
            
            printf("is your number %d?", guess);
            response = getchar();
        }
        
    }
    printf("the number is %d", guess);
    return 0;
}
