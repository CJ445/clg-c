// Type your URK number and Name here 
#include<stdio.h>
#include<math.h>
int main(){
    float x1,y1,x2,y2,dist;
    printf("Enter x1 coordinate : ");
    scanf("%f",&x1);
    printf("Enter y1 coordinate : ");
    scanf("%f",&y1);
    printf("Enter x2 coordinate : ");
    scanf("%f",&x2);
    printf("Enter y2 coordinate : ");
    scanf("%f",&y2);
    dist = ((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    printf("Distance between the said points is : %.4f",sqrt(dist));
    printf("\n");
    printf("Your_URK_and_Name_here");

    return 0;
}
