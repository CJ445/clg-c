#include <stdio.h>

int main()
{
    int n,sum=0,*ptr;
    
    printf("Enter the number of elements:");
    scanf("%d",&n);
    ptr=&n;
    int a[*ptr];
    
    printf("Enter the %d values\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        ptr=&a[i];
        sum+=*ptr;
    }
    
    printf("The elements entered are:-\n");
    
    for(int i=0;i<n;i++)
    {
        ptr=&a[i];
        printf("%d\n",*ptr);
    }
    
    ptr=&sum;
    
    printf("sum:%d",*ptr);
    
    return 0;
    
}
