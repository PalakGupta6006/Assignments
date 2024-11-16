/*Simple Calculator is a C language-based application used for
performing all the simple arithmetic operations like addition,
multiplication, division, and subtraction. The application can be
made using basic knowledge of C like if-else statements, loops,
etc.
The functionalities of the application are mentioned below:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Square roots 
6. Logarithmic values 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>

float add(float,float);
float diff(float,float);
float prod(float,float);
float div(float,float);
float root(float);
float calc_log(float);
int main()
{
    float x,y;
    float result;
    char choice[15];
    printf("Enter the operation you want to apply: ");
    scanf("%s",choice);
    if(strcmp(choice,"addition")==0)
    {
        printf("enter two numbers: ");
        scanf("%f%f",&x,&y);
        result = add(x,y);
        printf("result:%f",result);
    }
    else if(strcmp(choice,"subraction")==0)
    {
        printf("enter two numbers: ");
        scanf("%f%f",&x,&y);
        result=diff( x, y);
        printf("result:%f",result);
    }
    else if(strcmp(choice,"multiplication")==0)
    {
        printf("enter two numbers: ");
        scanf("%f%f",&x,&y);
        result=prod(x, y);
        printf("result:%f",result);
    }
    else if(strcmp(choice,"division")==0)
    {
        printf("enter two numbers: ");
        scanf("%f%f",&x,&y);
        result=div(x,y);
        printf("result:%f",result);
    }
    else if(strcmp(choice,"root")==0)
    {
        printf("enter a number: ");
        scanf("%f",&x);
        if(x<0)
        {
            printf("Can't calc sqrt of negative number");
        }
        else 
       {
         result=root(x);
         printf("result:%f",result);
       }
    }
    else if(strcmp(choice ,"log")==0)
    {
        printf("enter a number: ");
        scanf("%f",&x);
        result = log(x);
        printf("result:%f",result);
    }
    else
    {
        printf("enter a valid choice");
    }
    return 0;
}

    float add(float x,float y)
    {
        return x+y;
    }
    float diff(float x,float y)
    {
        return x-y;
    }
    float prod(float x,float y)
    {
        return x*y;
    }
    float div(float x,float y)
    {
        return (float)(x/y);
    }
    float root(float x)
    {
        return sqrt((float)x);
    }
    float calc_log(float x)
    {
        return log( x);
    }