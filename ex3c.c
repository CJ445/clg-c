// Type your URK and name here
#include <stdio.h>
int main()
{
    int i, n, sum=0;
    printf("Enter upper limit: ");
    scanf("%d", &n);
    for(i=2; i<=n; i+=2){
        sum += i;}
    printf("Sum of all even number between 1 to %d = %d", n, sum);
    
    printf("\n");
    printf("Replace with your name and URK");
    return 0;
}
