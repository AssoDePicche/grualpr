#include "../entity/id.h"

id generate_id()
{
  static unsigned int key = 0;

  id id = {key};

  key++;

  return id;
}
