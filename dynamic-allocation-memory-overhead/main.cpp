void g(int*);

int main()
{
   for (int i = 0; i < 100'000'000; i++)
   {
      int* pi = new int{};
      g(pi);
   }
}
