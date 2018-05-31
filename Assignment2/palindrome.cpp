#include<stdio.h>
#include<math.h>
int main()
{
int m,r=0,x,n,k=0;
printf("Give any number \n");
scanf("%d",&x);
n=x;
while(n!=0)
{n=n/10;
++k;
}
n=x;
for(k;k>=0;k--)
{m=n%10;
r=r+(m*pow(10,k-1));
n=n/10;
}
printf("%d is the palindrome of %d",r,x);
}
