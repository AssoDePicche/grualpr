#include "../entity/employee.h"
#include <stdio.h>

void describe_employee(const employee employee)
{
  describe_name(employee.name);

  printf("Idade: %d anos\n", employee.age);

  describe_address(employee.address);

  describe_department(employee.department);

  describe_phone(employee.phone);

  printf("Salário: R$ %.2lf\n", employee.salary);
}
