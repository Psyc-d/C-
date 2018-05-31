#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter a number \n");
scanf("%d",&x);
y=x%2;
z=x%3;
switch (y) {
    case 0:printf("The number is divisible by 2\n");
break;
  default:printf("The number is not divisible by 2\n");
}
switch(z)
{
  case 0:printf("The number is divisible by 3\n");
break;
  default:printf("The number is not divisible by 3\n");
  }

}
