// Type your URK number and Name here 
#include <stdio.h>
void main()
{
   int i,j,rows;
   printf("Input number of rows : ");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   printf("*");
	printf("\n");
   }
   printf("\n");
   printf("Your_URK_and_Name_here");
}