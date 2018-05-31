#include<stdio.h>
#include<string.h>
void encrypt(char pass[],int key)
{ 
 	 	unsigned int i;
 	 	for(i=0;i<strlen(pass);i++)
 	 	{
 	 		pass[i] = pass[i] + key;
 	 		if(
 	 		
 	 	}
 }

 
 int main()
 { int k;
 printf("give the key");
 scanf("%d",&k);
 char pass[100];
 printf("Enter the string \n");
 scanf("%s",pass);
 printf("Pass = %s",pass);
 encrypt(pass,k);
 printf("Encrypted value = %s",pass);
 return 0;
 }	





    
