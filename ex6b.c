#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int i;
    int marks[n];
    printf("Enter the marks of students: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
        if(i!=n-1){
            printf("Enter next mark : ");
        }
    }
    int min = marks[0];
    int max = marks[0];
    for (i = 0; i < n; i++) {
        if (marks[i] > max) {
            max = marks[i];
        }
        if (marks[i] < min) {
            min = marks[i];
        }
    }
    printf("The minimum mark is: %d\n", min);
    printf("The maximum mark is: %d\n", max);
    return 0;
}
