// Type your URK number and Name here 
#include <stdio.h>
main(){
    int a, b, temp;
    printf("Enter two numbers sep. by space : ");
    scanf("%d%d",&a,&b);
    printf("Numbers before swapping \n a = %d\n b = %d",a,b);
    printf("\n");
    temp=a;
    a=b;
    b=temp;
    printf("Numbers after swapping \n a = %d\n b = %d",a,b);
    printf("\n");
    printf("Your_URK_and_Name_here");

}