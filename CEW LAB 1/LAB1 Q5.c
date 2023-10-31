#include <stdio.h>
#include <stdlib.h>

int fab(a,b,num)
{
    int x=a,y=b,z,n=num;
    if (n==0)
      return 0;
    else
    {
        z=x+y;
        printf("%d",z);
        return fab(y,z,n-1);
    }
}
int main()
{
    int a=0,b=1,num;
    printf("FIBONACCI SERIES PRINTER\n enter nth number of fibonacci series:");
    scanf("%d",&num);
    printf("1 ");
    fab(a,b,num);
}
