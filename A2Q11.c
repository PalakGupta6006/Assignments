#include<stdio.h>
int main()
{
    int array[25]={3,6,2,87,52,75,35,95,34,63,25,28,46,1,37,62};
    int i,x,p;
    
    printf("Enter the position and no which is to be inserted: ");
    scanf("%d%d",&x,&p);

    for(i=p;i<=25;i++)
    {
        array[i]= array[i+1];
        array[p]=x;
        array[25]=array[25+1];
        printf("Array[%d]: %d",i,array[i]);
    }
    return 0;
}