#include<stdio.h>

void arrinput(int x[]);
int arrelements( int z[]);
void merge( int a[], int b[]);
int n1,n2;
int main()
{ int n1,n2,arr1[150],arr2[150],k,arr3[300];
  arrinput(arr1);
  arrinput(arr2);
n1=arrelements(arr1);
n2=arrelements(arr2);

printf("The FIRST array is \n");
for(k=0;k<n1;k++)
printf("%d \n",arr1[k]);

printf("The SECOND array is \n");
for(k=0;k<n2;k++)
printf("%d \n",arr2[k]);



   merge(arr1, arr2);
}

void arrinput( int arr[])
{
 int c,n;
 printf("Enter the number of elements of array\n");
scanf("%d",&n);
 
 printf("Enter the values for array\n");
 for(c=0;c<n;c++)
 scanf("%d",&arr[c]);
 
 }
 int arrelements(int arr[])
 { int n;
 n = sizeof(arr)/sizeof(short);

 return n;
 }
void merge( int arr1[], int arr2[])
{ int res[300],i=0,j=0,k=0;

                                                                                                       
                                                                                                   
 while (i < n1 && j < n2) {
 if (arr1[i] <= arr2[j]) {
 res[k] = arr1[i];
 i++;
 k++;
 } else {
 res[k] = arr2[j];
 k++;
 j++;
 }}
 
  while (i < n1) {
 res[k] = arr1[i];
 i++;
 k++;
 }
 
 
  while (j < n2) {
 res[k] = arr2[j];
 k++;
 j++;
 }
  printf("\nMerged array is :");
 for (i = 0; i < n1 + n2; i++)
 printf("%d ", res[i]);
 }
 
 
 
   
