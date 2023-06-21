#pragma once
#ifndef DEPARTMENT_H
#define DEPARTMENT_H

typedef struct
{
	char name[64];
} department;

void describe_department(const department department);

#endif
