#include<stdio.h>
#include<math.h>
int main()
{
int r=0,x,i,n=0,k;
printf("Give any number");
scanf("%d",&x);
i=x;
while(i!=0)
{i=i/10;
++n;
}
i=x;
for(k=1;k<=n;k++)
{r = r + pow(i%10,n);
i /= 10;
 }
 if(r==x)
 printf("The given number is an amstrong number");
 else
 printf("The given number is not an amstrong number");
 } 
 
