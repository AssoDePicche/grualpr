#include "../entity/phone.h"
#include <stdio.h>

void describe_phone(const phone phone)
{
  printf("(%s) %s\n", phone.prefix, phone.number);
}
