#include "../ui/ui.h"
#include <stdio.h>
#include <stdlib.h>

void print_line()
{
  printf("----------\n");
}

void clear()
{
  system("cls");
}

void pause()
{
  system("pause");
}

void close()
{
  exit(0);
}
