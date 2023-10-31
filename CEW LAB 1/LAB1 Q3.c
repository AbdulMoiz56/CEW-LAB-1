#include <stdio.h>
#include <stdlib.h>

 int main(){
     int height;
     printf("Enter the height of a person:");
     scanf("\n%d",&height);

     if (height < 150) {
         printf("Category: Dwarf\n");}
      else if (height >= 150 && height < 165) {
         printf("Category: Average\n");}
      else {
         printf("Category:Tall\n");}

     return 0;
 }
