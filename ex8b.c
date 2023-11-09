#include <stdio.h>

int main()
{
    int n,sum=0,*ptr;
    
    printf("Enter the number of elements: ");
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
    
    for(int j=0;j<n;j++)
    {
        ptr=&a[j];
        printf("%d\n",*ptr);
        sum = sum + *ptr;
    }
    
    
    
    printf("sum:%d\n",sum);
    
    return 0;
    
}
