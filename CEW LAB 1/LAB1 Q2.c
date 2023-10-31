#include <stdio.h>
#include <stdlib.h>

 int main()
 {int height,width;
 printf("Enter the height of a rectangle:");
 scanf("\n%d",&height);

 printf("Enter the width of a rectangle:");
 scanf("\n%d",&width);

 printf("The perimeter of a Rectangle=%d\n",2*(height+width));

 printf("The area of a rectangle =%d\n",height*width);
 return 0;
 }
