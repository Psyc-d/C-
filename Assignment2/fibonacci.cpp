#include<stdio.h>
int main()
{
int x=1,y=1,z,n,k;
printf("How many digits do you want the fibbonaci til");
scanf("%d",&n);
printf("%d \t",x);
printf("%d \t",y);
for(k=0;k<=n-3;k++)
{z=x+y;
x=y;
y=z;
printf("%d \t",z);
}
}

