#include<stdio.h>
int main()
{
  int x,y,z,t;
  printf("Enter 4 numbers \n");
  scanf("%d %d %d %d",&x,&y,&z,&t);
  if(x<y)
  x=y;
  if(x<z)
  x=z;
  if(x<t)
x=t;
printf("%d is the greatest of the four numbers given", x);
}
