#include <stdio.h>

int
main ()
{
  printf ("Hello World\n");
  char op;
  double num1, num2;

  printf ("Enter an operator\n");
  scanf ("%c", &op);
  printf ("Enter two numbers\n");
  scanf ("%lf %lf", &num1, &num2);

  switch (op)
    {
    case '+':
      printf ("Result = %2lf \n", num1 + num2);
      break;

    case '-':
      printf ("Result = %2lf \n", num1 - num2);
      break;

    case '*':
      printf ("Result = %2lf \n", num1 * num2);
      break;

    case '/':
      if (num2 != 0)
	printf ("Result = %2lf \n", num1 / num2);
      else
	printf ("Division by zero is not allowed \n");
      break;

    default:
      printf ("Error : Invalid operator\n");
    }

  return 0;
}
