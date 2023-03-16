#include <stdio.h>

 int main() {
     int a,b,c=0,d;
     printf("enter your number: ");
     scanf("%d",&a);
     d=a;
     while(a>0)
     {
         b=a%10;
         c=(c*10)+b;
         //printf("%d",b);
         a=a/10;
     }
     if (d==c)
     printf("number is pelindrom");
     else
     printf("number is not pelindrom");
    
    return 0;
 }
