#include<stdio.h>
int main()
{   int x,y,z,t;
  printf("Enter 4 numbers \n");
  scanf("%d %d %d %d",&x,&y,&z,&t);
if(x>y);
goto label1;
if(y>x&&y>z&&y>t);
goto label2;
if(z>x&&z>y&&z>t);
goto label3;
if(t>x&&t>z&&t>y);
goto label4;
label1:printf("%d is the greatest",x);
goto l5;
label2:printf("%d is the greatest",y);
goto l5;
label3:printf("%d is the greatest",z);
goto l5;
label4:printf("%d is the greatest",t);
l5:;
}
