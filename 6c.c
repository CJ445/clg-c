#include<stdio.h>
int main() {
    float a,b;
    printf("Enter two numbers sep. by space : ");
    scanf("%f%f",&a,&b);
    if(b==0)
    {
        printf("Division by zero error\n");
    }
    else
    {
        printf("The division is %f\n",a/b);
    }
    return 0;
}
