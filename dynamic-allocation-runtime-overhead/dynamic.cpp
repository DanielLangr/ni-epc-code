void g(int*);

int main()
{
   for (long l = 0; l < 10'000'000'000L; l++)
   {
      int* pi = new int(1);
      g(pi);
      delete pi;
   }
}
