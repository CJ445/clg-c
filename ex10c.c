#include <stdio.h>
#include <stdlib.h>
struct Student {
    char name[50];
    int roll_number;
    float marks;
};
void addStudent() {
    struct Student student;
    FILE *file = fopen("student.txt", "a");
    
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return;
    }
    
    printf("Enter student details:\n");
    printf("Name: ");
    scanf("%s", student.name);
    printf("Roll Number: ");
    scanf("%d", &student.roll_number);
    printf("Marks: ");
    scanf("%f", &student.marks);
    
    fprintf(file, "%s %d %.2f\n", student.name, student.roll_number, student.marks);
    fclose(file);
}
void displayStudents() {
    struct Student student;
    FILE *file = fopen("student.txt", "r");
    
    if (file == NULL) {
        printf("No records found.\n");
        return;
    }
    
    printf("Student Records:\n");
    printf("Name\tRoll Number\tMarks\n");
    
    while (fscanf(file, "%s %d %f", student.name, &student.roll_number, &student.marks) != EOF) {
        printf("%s\t%d\t\t%.2f\n", student.name, student.roll_number, student.marks);
    }
    
    fclose(file);
}

int main() {
    int choice;
    
    while (1) {
        printf("\nStudent Management System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    
    return 0;
}
