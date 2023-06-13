#ifndef EMPLOYEE_H
#define EMPLOYEE_H

typedef struct
{
	unsigned int id, age;
	char name[50], address[50], department[50], phone[11];
	double salary;
} Employee;

void printEmployee(const Employee employee);

#endif
