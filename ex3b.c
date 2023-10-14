// Type your URK and name here
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
   printf("Replace with your URK and name");
}
