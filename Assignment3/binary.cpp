#include<stdio.h>
int main()
{

int c,f,l,m,n,s,ar[100];
printf("Enter the number of elements \n");
scanf("%d",&n);
 
 printf("Enter the numbers \n");
 for(c=0;c<n;c++)
 scanf("%d",&ar[c]);
 
 printf("Enter the value to find \n");
 scanf("%d",&s);
 
 f=0;
 l=n-1;
 m=(f+l)/2;
 
 while(f <= l)
{

if(ar[m] < s)
f = m +1;
else if (ar[m] == s)
{printf("%d found at location %d \n",s,m+1);
break;
}
else
l=m-1;
m=(f+l)/2;
}
if(f>l)
printf("Not found");
}
