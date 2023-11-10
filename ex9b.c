struct employee
{
	char name[50];
    int employeeId;
    float hoursWorked;
    float hourlyRate;
    float salary;
};

float Salary(float a, float b)
{
    float s= a*b;
    return s;
}

int main()
{
	int i, n;
	printf("\nEnter the Total Number Of employees: ");
	scanf("%d", &n);
	struct employee e[n];
	printf("\nEnter Employee Details: \n");
	for (i = 0; i < n; i++)
		{
			printf("\nEnter Employee Name: ");
			scanf("\n%[^\n]%*c", &(e[i].name));
			printf("Enter Employee ID: ");
			scanf("%d", &e[i].employeeId);
			printf("Enter Hours Worked: ");
			scanf("%f", &(e[i].hoursWorked));
			printf("Enter Hourky Rate: ");
			scanf("%f", &(e[i].hourlyRate));
		}
		printf("\n\nDisplay Employee Details:\n");
		for (i = 0; i < n; i++)
			{
				printf("\n Employee Name: %s", e[i].name);
				printf("\n Employee ID: %d", e[i].employeeId);
				printf("\n Hours Worked: %.1f", e[i].hoursWorked);
				printf("\n Hourky Rate: %.1f", e[i].hourlyRate);
				printf("\n salary: %.1f", Salary(e[i].hoursWorked,e[i].hourlyRate));
				printf("\n\n");
			}return 0; }
