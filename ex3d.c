// Type your URK and name
#include<stdio.h>  
int main()  
{  
    int i, j, n;
    printf("Enter number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    printf("\n");
    printf("Replace with your URK and name");
    return 0;
}
