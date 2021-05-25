#include <algorithm>
#include <chrono>
#include <iostream>
#include <random>
#include <vector>

bool compare(int lhs, int rhs)
{
   return lhs < rhs;
}

int main()
{
   std::vector<int> v;

   std::random_device rd;
   std::mt19937 gen(rd());
   std::uniform_int_distribution<int> dist;

   for (int i = 0; i < 100'000'000; i++)
      v.push_back( dist(gen) );

   auto start = std::chrono::high_resolution_clock::now();

   std::sort(v.begin(), v.end(), compare);

   auto end = std::chrono::high_resolution_clock::now();
   auto ns = std::chrono::duration_cast< std::chrono::microseconds >(end - start);

   std::cout << ns.count() << std::endl;
}
