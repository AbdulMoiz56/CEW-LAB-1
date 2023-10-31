#include <stdio.h>
#include <stdlib.h>

// QUESTION # 03

 int compareStrings(const char str1[], const char str2[]) {
     int len1 = strlen(str1);
     int len2 = strlen(str2);

     if (len1 != len2) {
         return 0; // The strings have different lengths, so they are not equal.
     }

     for (int i = 0; i < len1; i++) {
         if (str1[i] != str2[i]) {
             return 0; // The strings are not equal.
         }
     }
     return 1; // The strings are equal.
 }
 int main() {
     char str1[] = "Hello0";
     char str2[] = "Hello";

     if (compareStrings(str1, str2)) {
         printf("The two strings are equal.\n");
     } else {
         printf("The two strings are not equal.\n");
     }

     return 0;
 }
