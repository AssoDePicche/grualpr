#include "../entity/name.h"
#include <stdio.h>

void describe_name(const name name)
{
  printf("%s %s", name.first_name, name.last_name);
}
