#include "../app/app.h"
#include "../entity/employee.h"
#include "../ui/ui.h"
#include <locale.h>
#include <malloc.h>
#include <stdio.h>

void enroll_employee(employee *employees, const unsigned int size);

void print_employees(const employee *employees, const unsigned int size);

int main(void)
{
  setlocale(LC_ALL, LOCALE);

  employee *employees = (employee *)malloc(sizeof(employee));

  unsigned int size = 0;

  int option = 0;

  while (1)
  {
    clear();

    menu();

    scanf("%d", &option);

    clear();

    switch (option)
    {
    case ENROLL_EMPLOYEE:
      enroll_employee(employees, size);

      ++size;
      break;

    case LIST_EMPLOYEES:
      print_employees(employees, size);
      break;

    case CLOSE:
      close();
      break;

    default:
      printf("Opção inválida!\n");

      pause();
      break;
    }
  }

  return 0;
}

void menu()
{
  printf("[1] Cadastrar funcionário\n");

  printf("[2] Visualizar funcionários cadastrados\n");

  printf("[3] Sair\n");

  printf("\n> ");
}

void enroll_employee(employee *employees, const unsigned int size)
{
  employee employee;

  printf("Primeiro nome: ");

  scanf("%s", &employee.name.first_name);

  printf("Último nome: ");

  scanf("%s", &employee.name.last_name);

  printf("Idade: ");

  scanf("%d", &employee.age);

  printf("Prefixo do telefone (XX): ");

  scanf("%s", &employee.phone.prefix);

  printf("Número do telefone (XXXXXXXXX): ");

  scanf("%s", &employee.phone.number);

  printf("Cidade: ");

  scanf("%s", &employee.address.city);

  printf("Rua: ");

  scanf("%s", &employee.address.street);

  printf("Número da residência: ");

  scanf("%s", &employee.address.number);

  printf("Departamento: ");

  scanf("%s", &employee.department.name);

  printf("Salário: ");

  scanf("%lf", &employee.salary);

  employees[size] = employee;
}

void print_employees(const employee *employees, const unsigned int size)
{
  if (0 == size)
  {
    printf("Nenhum funcionário cadastrado!\n");
  }

  for (unsigned int index = 0; index < size; ++index)
  {
    describe_employee(employees[index]);

    print_line();
  }

  pause();
}
