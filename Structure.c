#include <stdio.h>

//GLOBAL STRUCTURE ---> Can be called and accessed anywhere
struct Employee{
    
    int employeeNumber;
    char employeeName[20];
    float employeeSalary;

};

int main(){

    //LOCAL STRUCTURE --> Can only be called and accessed in the function in which it wass declared



    struct Employee employee1 = {123456, "Kezia", 6700.99};

    printf("Employee details: \nEmployee Numbers: %d \nEmployee Name: %s \nEmployee Salary: Nle %.2f\n", employee1.employeeNumber, employee1.employeeName, employee1.employeeSalary);
    
    printf("Size of employee %d bytes\n", sizeof(employee1));
    printf("Size of employee structure %d bytes", sizeof(struct Employee));

    return 0;
}
