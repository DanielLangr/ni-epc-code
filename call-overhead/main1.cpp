#include <algorithm>
#include <chrono>
#include <iostream>
#include <random>
#include <vector>

#include "Int.h"

int main()
{
   std::vector<Int> v;

   std::random_device rd;
   std::mt19937 gen(rd());
   std::uniform_int_distribution<int> dist;

   for (int i = 0; i < 10'000'000; i++)
   // v.push_back( dist(gen) );
      v.push_back( 10'000'000 - i );

   auto start = std::chrono::high_resolution_clock::now();

   std::sort(v.begin(), v.end(), compare_Int);

   auto end = std::chrono::high_resolution_clock::now();
   auto ns = std::chrono::duration_cast< std::chrono::microseconds >(end - start);

   std::cout << ns.count() << std::endl;
}
