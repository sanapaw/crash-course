#include <stdio.h>

 int main() {
     int k=1;
    for(int i=0;i<5;i++)//for rows 
    {
     for(int j=0;j<i;j++)//for column
     {
      printf("%d ",k);
     k++;
      //printf("%d ",j);
     }
     printf("\n");
    }
    return 0;
 }
