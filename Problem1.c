#include <stdio.h>

int sumofMults(int x, int limit)
{
  int sum = 0;
  int xMult = x;
  while (xMult < limit) {
    sum += xMult;
    xMult += x;
  }
  return sum;
}

int main()
{
  printf("The sum of all the multiples of 3 or 5 below 1000 is: %d\n", sumofMults(3, 1000) + sumofMults(5, 1000));
  return 0;
}
