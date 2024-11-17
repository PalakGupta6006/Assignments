//WAP to print Pascal’s Triangle.

#include <stdio.h> 
int main() 
{ 
    int n = 5, coeff = 1; 
    for (int i = 0; i < n; i++) 
    { 
       for (int space = 1; space <= n - i; space++) 
         printf(" "); 
       for (int j = 0; j <= i; j++) 
        { 
          if (j == 0 || i == 0) 
          coeff = 1; 
          else 
          coeff = coeff * (i - j + 1) / j; 
          printf("%4d", coeff); 
       } 
      printf("\n"); 
    } 
return 0; 
}