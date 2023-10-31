#include <stdio.h>
#include <stdlib.h>

 void decimalToBinary(int decimal) {
     if (decimal > 0) {
         decimalToBinary(decimal / 2);
         printf("%d", decimal % 2);
     }
 }

 int main() {
     int decimalNumber;

     printf("Enter a decimal number: ");
     scanf("%d", &decimalNumber);

     if (decimalNumber < 0) {
         printf("Please enter a non-negative decimal number.\n");
         return 1;
     }

     printf("Binary representation: ");

     if (decimalNumber == 0) {
         printf("0");
     } else {
         decimalToBinary(decimalNumber);
     }

     printf("\n");
     return 0;
 }
