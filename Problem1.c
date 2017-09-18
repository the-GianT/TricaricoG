#include <stdio.h>

// calculates the sum of all the natural numbers below limit that are multiples
// of x
int sumofMults(int x, int y, int limit)
{
  int sum = 0;
  int a; // maximum of x and y
  int b; // minimum of x and y
  if (x > y) {
    a = x;
    b = y;
  }
  else {
    a = y;
    b = x;
  }
  int aMult = a;
  int bMult = b;
  while (aMult < limit) {
    sum += aMult;
    aMult += a;
  }
  while (bMult < limit) {
    if (bMult % a != 0) {
      sum += bMult;
    }
    bMult += b;
  }
  return sum;
}

int main()
{
  printf("The sum of all the multiples of 3 or 5 below 10 is: %d\n", sumofMults(3, 5, 10));
  printf("The sum of all the multiples of 3 or 5 below 1000 is: %d\n", sumofMults(3, 5, 1000));
  return 0;
}
