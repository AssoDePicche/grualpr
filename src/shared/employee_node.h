#pragma once
#ifndef EMPLOYEE_NODE_H
#define EMPLOYEE_NODE_H

#include "../entity/employee.h"

typedef struct
{
	employee employee;
	struct employee_node *next;
} employee_node;

employee_node *create_node(employee employee);

#endif
