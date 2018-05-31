 #include<stdio.h>

char dive(char,int,int)
{ int i,j;
 g
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
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
    dive(x,y,pool);
}

