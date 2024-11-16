/* This random number will decide the choice of computer
as:
• If the number is between 0-33 then the choice will be
Stone.
• If the number is between 33-66 then the choice will be
Paper.
• If the number is between 66-100 then the choice will be
Scissors.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    int s1,s2;//s1 is user number and s2 is computer number
    char user_choice[25],comp_choice[25];
    printf("Enter two numbers from 0-100: ");
    scanf("%d%d",&s1,&s2);
    if(s1>=0 && s1<33 )
    {
        strcpy(user_choice, "Stone");
        printf("\nYour's is a Stone");
    }
    else if (s1>=33 && s1<66 )
    {
        strcpy(user_choice, "Paper");
        printf("\nYour's is a Paper");
    }
    else if (s1>=66 && s1<100 )
    {
        strcpy(user_choice, "Scissors");
        printf("\nYour's is a Scissors");
    }
    else
    {
        printf("\nNot entered a valid number");
    }

    if(s2>=0 && s2<33 )
    {
        strcpy(comp_choice, "Stone");
        printf("\nComputer's is a Stone");
    }
    else if (s2>=33 && s2<66 )
    {
        strcpy(comp_choice, "Paper");
        printf("\nComputer's is a Paper");
    }
    else if (s2>=66 && s2<100 )
    {
        strcpy(comp_choice, "Scissors");
        printf("\nComputer's is a Scissors");
    }
    else
    {
        printf("\nNot entered a valid number");
    }

    if (strcmp(user_choice, comp_choice) == 0) {
        printf("\nIt's a tie!\n");
    }
    else if ((strcmp(user_choice, "Stone") == 0 && strcmp(comp_choice, "Scissors") == 0) ||
             (strcmp(user_choice, "Paper") == 0 && strcmp(comp_choice, "Stone") == 0) ||
             (strcmp(user_choice, "Scissors") == 0 && strcmp(comp_choice, "Paper") == 0))
              {
                    printf("\nYou win!\n");
              }
    else
     {
        printf("\nComputer wins!\n");
     }

    return 0;
    }