#include <algorithm>
#include <random>
#include <set>
#include <unordered_set>
#include <vector>

void noop(int*);

const int n = 100'000'000;

void test_sorted_vector()
{
   std::vector<int> v;
   for (int i = 0; i < n; i++)
      v.push_back(i);

   std::random_device rd;
   std::default_random_engine eng{rd()};
   std::uniform_int_distribution dist(0, n - 1);

   for (int k = 0; k < n; k++) {
      int i = dist(eng);
      bool found = std::binary_search(v.begin(), v.end(), i);
      noop(&i);
   }
}

void test_set()
{
   std::set<int> s;
   for (int i = 0; i < n; i++)
      s.insert(i);

   std::random_device rd;
   std::default_random_engine eng{rd()};
   std::uniform_int_distribution dist(0, n - 1);

   for (int k = 0; k < n; k++) {
      int i = dist(eng);
      bool found = s.contains(i);
      noop(&i);
   }
}

void test_unordered_set()
{
   std::unordered_set<int> s;
   for (int i = 0; i < n; i++)
      s.insert(i);

   std::random_device rd;
   std::default_random_engine eng{rd()};
   std::uniform_int_distribution dist(0, n - 1);

   for (int k = 0; k < n; k++) {
      int i = dist(eng);
      bool found = s.contains(i);
      noop(&i);
   }
}

int main()
{
// test_sorted_vector();
// test_set();
   test_unordered_set();
}
