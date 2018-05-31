#include<stdio.h>
#include<math.h>
int main()
{int i,n;


printf("Please enter the number of food items in your restaurant\n");
scanf("%d",&n);
char names[n];
int price[n];
printf("Please enter the names of each item along with the price\n");
for(i=0;i<n;i++)
scanf("%s %d",&names[i],&price[i]);
printf("The menu is\n");
for(i=0;i<n;i++)
{
  printf("%s\t-",&names[i]);
  printf("%d\n",price[i]);
 }
}
