#include <stdio.h>

void main ()
{
  int number;
  int result;

  int factorial (int n)
  {
    int f = 1;
    int i = 0;
    for (i = 1; i < n + 1; i++)
      {
	f = f * i;
      }
    return f;
  }

  printf ("Enter a number to find the facrorial of : \n");
  scanf ("%d", &number);
  result = factorial (number);
  printf ("The result is %d ", result);
}
