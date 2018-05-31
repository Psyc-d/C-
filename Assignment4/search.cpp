#include<stdio.h>
int main()
{
label1:;
int m=0,n=0,i,j;

printf("Enter the number of rows and columns of the matrix \n");
scanf("%d %d",&m,&n);
if(m<5 or n<5)
{ printf("Give a value greater than 5 to both the row and column \n");
goto label1;
}
int mat[m][n];
printf("Enter the values of the matrix , They should be between 0 and 7 \n");
for(i=0;i<m;i++)
{ for(j=0;j<n;j++)
{ 

label2:;
scanf("%d",&mat[i][j]);
if(mat[i][j]>7 or mat[i][j]<0)
{printf("Please enter a value between 0 and 7 \n");
goto label2;
} 
 }
 }
 printf("The frequencies of the values are ");
 
 
 
 if(mat[i][j]==mat
 
 
       printf("The First matrix is \n");      
             
j=0,i=0;
for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
	{printf("%d \t",mat[i][j]);
	}
	printf("\n");
	}
	
 
 








}
 
 
 
 
 
 
 
 
