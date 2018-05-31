#include<stdio.h>
#include<math.h>
int main()
{
int m,n;
printf("Enter the number of rows\n");
scanf("%d",&m);
printf("Enter the number of columns\n");
scanf("%d",&n);
int depression[m][n];
int i=0,j=0;
printf("Give the values for the matrix\n");
for(j=0;j<n;j++)
{
  for(i=0;i<m;i++)
  {

 scanf("%d",&depression[i][j]);

  }
}
int evencount=0,oddcount=0;
i=0,j=0;
for(j=0;j<n;j++)
{
  for(i=0;i<m;i++)
  {
if(depression[i][j]%2==0)
evencount++;
if(depression[i][j]%2==1)
oddcount++;
 }
 printf("The number of even numbers in the %d row is %d and the number of odd numbers is %d\n",j,evencount,oddcount);
evencount=0,oddcount=0;
}
for(j=0;j<n;j++)
{
  for(i=0;i<m;i++)
  {

 printf("%d\t",depression[i][j]);

  }
  printf("\n");
}

printf("\n");


printf("Sorting the rows in ascending order\n");
int q=0;
int k=0;
for(k=0;k<n+m;k++)
{
  for(j=0;j+1<n;j++)
  {
    for(i=0;i+1<m;i++)
    {
      if(depression[i][j]>depression[i+1][j])
      {q=depression[i][j];
        depression[i][j]=depression[i+1][j];
        depression[i+1][j]=q;
      }

     }
   }
}

for(j=0;j<n;j++)
{
  for(i=0;i<m;i++)
  {

 printf("%d\t",depression[i][j]);

  }
  printf("\n");
}


for(k=0;k<n+m;k++)
{
  for(j=0;j+1<n;j++)
  {
    for(i=0;i<m;i++)
    {
      if(depression[i][j]<depression[i][j+1])
      {q=depression[i][j];
        depression[i][j]=depression[i][j+1];
        depression[i][j+1]=q;
      }

     }
   }
}
printf("\n");
for(j=0;j<n;j++)
{
  for(i=0;i<m;i++)
  {

 printf("%d\t",depression[i][j]);

  }
  printf("\n");
}
}
