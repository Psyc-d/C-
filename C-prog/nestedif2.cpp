#include<stdio.h>
int main()
{   int x,y,z,t;
  printf("Enter 4 numbers \n");
  scanf("%d %d %d %d",&x,&y,&z,&t);
  if(x>y && x>z && x>t)
  {printf("%d is the greatest", x);
else
{if(y>x && y>z && y>t)
{printf("%d is the greatest", y);
else
{if(z>y && z>x && z>t)
{printf("%d is the greatest", z);
else
{if(t>y && t>z && t>x)
{printf("%d is the greatest", t);
}
}
}
}
}
}
}
}
