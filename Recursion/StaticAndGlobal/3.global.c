#include <stdio.h>

int x = 0; // make a single copy like static

int fun(int n)
{
  if (n > 0)
  {
    x++;
    return fun(n - 1) + x;
  }
  return 0;
}

int main()
{
  int a = 5;
  printf("%d", fun(a));

  return 0;
}