#include<stdio.h>
#include<math.h>
int main()
{
int a,r;
printf("Enter the number");
scanf("%d",&a);
for (r=0;r<=a;r++)
if(a==(r*r))
{ printf("%d is a perfect square with squareroot %d",a,r);
break;
}
if(a!=r*r)
printf("%d is not a perfect square",a);
}

