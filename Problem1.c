#include <stdio.h>

// calculates the sum of all the natural numbers below limit that are multiples
// of x
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
  printf("The sum of all the multiples of 3 or 5 below 10 is: %d\n", sumofMults(3, 10) + sumofMults(5, 10));
  printf("The sum of all the multiples of 3 or 5 below 1000 is: %d\n", sumofMults(3, 1000) + sumofMults(5, 1000));
  return 0;
}
