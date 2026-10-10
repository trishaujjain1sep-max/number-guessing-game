#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int secretnumber, guess, attempts=0;
    srand((unsigned int)time(NULL));
    secretnumber=rand()%100+1;
    printf("\n----------------------------------------\n");
    printf("----NUMBER GUESSING GAME----");
    printf("\n----------------------------------------\n");
    printf("I have selected a random number from 1 to 100.\n");
    printf("Try to guess it!\n\n");
    while(1)
    {
        printf("Enter your guess : ");
        if(scanf("%d",&guess)!=1)
        {
            int ch;
            printf("Invalid input! Please enter a valid number!\n");
            while((ch=getchar())!='\n' && ch!=EOF)
            {

            }
            continue;
        }
        if(guess<1||guess>100)
        {
            printf("Please enter a number between 1 to 100!\n\n");
            continue;
        }
        attempts++;
        if(guess<secretnumber)
        {
            printf("Too low!Try a higher number!\n\n");
        }
        else if(guess>secretnumber)
        {
            printf("Too high! Try a lower number!\n\n");
        }
        else{
            printf("\nCongratulations! You guessed it!\n");
            printf("The secret number was %d.\n",secretnumber);
            printf("Total attempts : %d\n",attempts);
            break;
        }
    }
    printf("Thanks for playing!\n");
    return 0;
}