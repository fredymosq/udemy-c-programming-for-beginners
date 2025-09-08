// write a program that declares a structure and prints out it's content
// create an employee structure with 3 members
// name (char array)
// hiresDate (int)
// salary (float)

#include <stdio.h>

struct Employee
{
   char name[30];
   char hireDate[15];
   float salary;
};


int main(int argc, char const *argv[])
{

    struct Employee johnDoe = {
        .name = "John Doe",
        .hireDate = "01/01/2025",
        .salary = 5000
    };

    struct Employee enteredEmployee;

    printf("Enter employee name: ");
    scanf("%[^\n]%*c", enteredEmployee.name);

    printf("\nEnter employee hire day: ");
    scanf("%[^\n]%*c", enteredEmployee.hireDate);

    printf("\nEnter employee salary:");
    scanf("%f", &enteredEmployee.salary);
    
    printf("Employee %s, hire date %s, salary %f\n", johnDoe.name, johnDoe.hireDate, johnDoe.salary);
    printf("Employee %s, hire date %s, salary %f\n", enteredEmployee.name, enteredEmployee.hireDate, enteredEmployee.salary);

    
    return 0;
}
