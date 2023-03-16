#include <stdio.h>

 int main() {
     int a,b;
     printf("enter your number: ");
     scanf("%d",&a);
     while(a>0)
     {
         b=a%10;
         printf("\n%d",b);
         a=a/10;
     }
    
    return 0;
 }
