#include <list>
#include <set>
#include <unordered_set>
#include <vector>

int main()
{
   std::vector<int> v;
   std::list<int> l;
   std::set<int> s;
   std::unordered_set<int> u;

   for (int i = 0; i < 100'000'000; i++)
      u.insert(i);
}
