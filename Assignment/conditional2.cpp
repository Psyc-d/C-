#include<stdio.h>
int main()
{   int x,y,z,t;
  printf("Enter 4 numbers \n");
  scanf("%d %d %d %d",&x,&y,&z,&t);
  (x>y && x>z && x>t)?printf("%d is the greatest",x):((y>x && y>z && y>t)?printf("%d is the greatest",y):((z>y && z>x && z>t)?printf("%d is the greatest",z):printf("%d is the greatest",t)));
}
