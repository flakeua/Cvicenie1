#include <stdio.h>

void hanoi(int n, int a, int b)
{
  if (n == 1) 
    printf("Presuň kameň z %d do %d\n", a, b);
  else
  {
    hanoi(n - 1, a, 6 - a);
    printf("Presuň kameň %d z %d do %d\n", n, a, b);
    hanoi(n - 1, 6 - a - b, b);
  }
}

int main()
{
  int n = 4;

  hanoi(n, 1, 2);
  return 0;
}