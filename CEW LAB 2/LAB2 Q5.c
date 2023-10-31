#include <stdio.h>
#include <stdlib.h>

// QUESTION # 05


     int main() {
     char inputArray[] = "Hello, World!";  // Change this array to your input

     int characters[256] = {0};  // Assuming ASCII characters

     printf("Unique characters in the array: ");

     for (int i = 0; inputArray[i] != '\0'; i++) {
         int charValue = (int)inputArray[i];
         if (characters[charValue] == 0) {
             characters[charValue] = 1;
             printf("%c ", inputArray[i]);
         }
     }

     printf("\n");

     return 0;
 }


