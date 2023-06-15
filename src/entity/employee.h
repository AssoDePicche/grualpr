#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "address.h"
#include "id.h"
#include "name.h"
#include "phone.h"

typedef struct
{
	id id;
	unsigned int age;
	address address;
	name name;
	char department[64];
	phone phone;
	double salary;
} employee;

void describe_employee(const employee employee);

#endif
