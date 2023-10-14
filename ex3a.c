// Type URK and name here
#include <stdio.h>
int main()
{
    int i, n,sum=0;
    printf("Input number of terms: ");
    scanf("%d", &n);

    printf("The odd numbers are : ");
    for(i=1;i<=n;i++)
    {
        printf("%d ",2*i-1);
        sum+=2*i-1;
    }
    printf("\n");
    printf("The Sum of odd Natural numbers upto %d terms: %d",n,sum);

    printf("\n");
    printf("Replace with URK and name");

    return 0;
}
