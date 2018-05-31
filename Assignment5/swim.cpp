 #include<stdio.h>
int main()
{
int row,col,i,j,man,x,y;             //variables for the array


	printf("Enter the number of rows and columns \n");
	label2:;
	scanf("%d %d",&row,&col);
	 if(row<3 || col<3)   
{ printf("Rows and columns should be more than 3 \n");
 
 goto label2;
 }


char pool[row][col];    // required array 2 dimensional


for(i=0;i<row;i++)
									// two 'for' loops
{	for(j=0;j<col;j++)

    { pool[i][j]= 'w';  // char declaration requires ''
    }
    }
    
 printf("Enter the index of the cell you want the man to jump into, provided its not a border\n");   //directives 
 printf("You'll be given a list of indexes to choose from \n");

for(i=2;i<row;i++)
									// two 'for' loops
{	for(j=2;j<col;j++)

    { printf(" (%d,%d) \t",i,j);
    }
    printf("\n");
    }
 printf("Choose any of the above values to get started \n");

 		label1:;

 scanf("%d %d",&x,&y);
 
 
 if(x<2||x>=row || y<2||y>=col)   
{ printf("Enter the values shown only in the list");
 
 goto label1;
 }

 pool[x-1][y-1]='k';   //replacing the value in the array
    
for(i=0;i<row;i++)

{	for(j=0;j<col;j++)

    { printf("%c \t",pool[i][j]);
}
    printf("\n");
}
    printf("This is Mr.K's current position \n");


if(row-x<x)
printf("The minimum distance from the bottom is %d \n",row-x);   
	if(row-x>x)
	printf("The minimum distance from the top is %d \n",x-1);
		if(row-x==x)
		printf("The minimum distance from the top and bottom is %d \n",row-x);
			if(col-y<y)
			printf("The minimumn distance from the right is %d \n",col-y);
				if(col-y>y)
				printf("The minimumn distance from the left is %d \n",y-1);
					if(col-y==y)
					printf("The minimum distance between left and right is %d \n",y);

}





















