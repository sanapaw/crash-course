#include <stdio.h>

int main() {
   for(int i=1;i<=3;i++)//for rows 
   {
    for(int j=1;j<=i;j++)//for column
    {
     //printf("  %d",i);
     //printf("  %d",j);
     //printf("%d",i);
     printf("%d",j);
    }
    printf("\n");
   }
   return 0;
}
