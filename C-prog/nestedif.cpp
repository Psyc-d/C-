#include<stdio.h>
int main()
{
  int x; /*variable declaration*/
  printf("Enter a number of your choice");
  scanf("%d",&x);
  if(x%2==0 && x%3==0)
{printf("The given number is divisible by 2 and 3");
else
{  if(x%2==0 && x%3!=0)
  {printf("The given number is divisible only by 2");

else
{  if (x%2!=0 && x%3==0)
    printf("The given number is divisible only by 3");
}
}
}
}
}
