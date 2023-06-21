#include "../entity/address.h"
#include <stdio.h>

void describe_address(const address address)
{
  printf("%s, %s (%s)\n", address.street, address.number, address.city);
}
