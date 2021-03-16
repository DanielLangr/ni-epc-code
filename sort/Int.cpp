#include <utility>

#include "Int.h"

bool compare_Int(const Int& lhs, const Int& rhs)
{
   return lhs < rhs;
}

void swap(Int& a, Int& b)
{
   std::swap(a, b);
}
