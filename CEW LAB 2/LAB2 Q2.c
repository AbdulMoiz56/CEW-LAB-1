#include <stdio.h>
#include <stdlib.h>

// QUESTION # 02
 int main() {
     int i , j , k;
     for(i=1;i<=5;i++)//rows
     {

         for(j=5;j>i;j--)//left side space
         {
             printf(" ");
         }
         for(k=1;k<=i;k++)//*, middle and right space
         {
             printf("*  ");
         }
         printf("\n");
     }
     return 0;
 }
