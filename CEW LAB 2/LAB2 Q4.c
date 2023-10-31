#include <stdio.h>
#include <stdlib.h>

// QUESTION # 04

 int main() {
     char sentence[1000];
     int i;

     printf("Enter a sentence: ");
     gets(sentence);

     for (i = 0; sentence[i] != '\0'; i++) {
         if (sentence[i] >= 'a' && sentence[i] <= 'z') {
             // Convert lowercase to uppercase
             sentence[i] = sentence[i] - 32; // ASCII value difference between lowercase and uppercase
         } else if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
             // Convert uppercase to lowercase
             sentence[i] = sentence[i] + 32; // ASCII value difference between uppercase and lowercase
         }
     }

     printf("Converted sentence: %s\n", sentence);

     return 0;
 }

