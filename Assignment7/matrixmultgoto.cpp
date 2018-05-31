#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],c[100][100];
	int sum,k,r1,c1,x,y,j,r2,c2;

	printf("Enter the number of rows and columns of the first matrix\n");
	scanf("%d %d",&r1,&c1);
	printf("Now enter the values of each element\n");
	
	x=0,y=0;
	
	col1:x=0;
	
	row1:;
	
	scanf("%d",&a[x][y]);
	x++;
	if(x<r1)
{
	goto row1;
}
	y++;
	if(y<c1)
{
	goto col1;
}
	l1:;
	printf("Enter the number of rows and columns of the second matrix\n");
	scanf("%d %d",&r2,&c2);
	printf("Now enter the values of each element\n");
	if(c1!=r2)
	{
	printf("Please enter the number of rows of the second matrix must be euqal to the number of columns in the first matrix for multiplication\n");
	goto l1;
}
	
	x=0,j=0;
	
	col3:x=0;
	
	row3:;
	
	scanf("%d",&b[x][j]);
	x++;
	if(x<r2)
{
	goto row3;
}
	j++;
	if(j<c2)
{
	goto col3;
}
	
y=0;
c1:x=0;
r1:
sum=0,k=0;
d1:
	
sum+=a[x][k]*b[k][y];
if(k<c1)
{k++;
goto d1;
}
c[x][y]=sum ;
if(x<r1)
{
x++;
goto r1;
}
if(y<c2)
{
y++;
goto c1;
}













	
	y=0;
	col2:x=0;
	
	row2:;
	
	printf("%d \t",c[x][y]);
	x++;
	if(x<r1)
{
	goto row2;
}
	printf("\n");
	
	y++;
	if(y<c2)
{
	goto col2;
}
}
	
	
	
	
	

