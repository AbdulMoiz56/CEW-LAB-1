#include <stdio.h>
#include <stdlib.h>

// QUESTION # 01
// ( USING FOR LOOP)
 int main()
 {
     int n, sum = 0;
     printf("Enter how many numbers you want:");
     scanf("\n%d", &n);
     for (int i = 1; i <= n; i += 2)
     {
         sum += i;
         printf("The odd natural numbers is:%d\n", i);
     }
     printf("Sum of odd numbers is:%d\n", sum);
     return 0;
 }

// (USING WHILE LOOP)
 int main(){
 int sum=0, i = 1;
 int n;
 printf("Enter how many numbers you want:");
 scanf("\n%d", &n);
 while (i<=n)
 {
     printf("The odd natural numbers is:%d\n", i);
     sum+=i;
     i+=2;

 }
     printf("The sum of odd natural number is:%d\n", sum);
     return 0;
 }

// (USING DO-WHILE LOOP)

 int main(){
     int sum=0,i=1;
     int n=15;

     do
     {   printf("The odd natural numbers is:%d\n", i);
         i+=2;
         sum+=i;

     } while (i<n);
         printf("The sum of odd natural number is:%d\n", sum);

    return 0;

 }
