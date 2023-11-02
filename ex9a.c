#include <stdio.h>
/*C Program to Store Information of Students Using Structure*/
struct student
{
int roll;
char name[50];
int age;
float marks;
};
int main()
{
int i, n;
printf("\nEnter the Total Number Of Student: ");
scanf("%d", &n);
struct student s[n];
printf("\nEnter Student Details: \n");
for (i = 0; i < n; i++)
{
printf("\nEnter Student Roll No: ");
scanf("%d", &(s[i].roll));
printf("Enter Student Name: ");
scanf("%s", s[i].name);
printf("Enter Student Age: ");
scanf("%d", &(s[i].age));
printf("Enter Student Marks: ");
scanf("%f", &(s[i].marks));
}
printf("\n\nDisplay Student Details:\n");
for (i = 0; i < n; i++)
{
printf("\nStudent Roll No: %d", s[i].roll);
printf("\nStudent Name: %s", s[i].name);
printf("\nStudent Age: %d", s[i].age);
printf("\nStudent Marks: %f", s[i].marks);
printf("\n\n");
}
  return 0; 
}
