#include "add.h"

int sub(int a, int b)
{
   return add(a, -b);
}

SPEC int mult(int a, int b)
{
   return a * b;
}
