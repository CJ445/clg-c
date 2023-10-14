// Type your URK and name here
#include<stdio.h>  
int main()  
{  
    int num, row, col, count = 1;  
    printf("Enter number of rows for Floyd's Triangle : ");  
    scanf("%d", &num);  
  
    printf("\n");  
    for(row = 1; row <= num; row++)  
    {  
        for(col = 1; col <= row; col++)  
        {  
            printf("%d  ", count++);  
        }  
        printf("\n");  
    }
    printf("\n");
    printf("Replace your URK and name");
    return 0;
}
