void g(int*);

int main()
{
   for (long l = 0; l < 100'000'000'000; l++)
   {
      int i = 1;
      g(&i);
   }
}
