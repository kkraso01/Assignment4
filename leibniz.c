#include <stdio.h>
int iOne = 1;
int iTwo = 2;
float fOne = 1.0;
float mfOne = -1.0;
float fFour = 4.0;

float
power (float x, int n)
{
  int i;
  float y = fOne;
  for (i = 0; i < n; i++)
    y = y * x;
  return y;
}

float
pi (int n)
{
  if (n == iOne)
    return fFour;
  return fFour * power (mfOne,
			n + iOne) * (fOne / (float) (iTwo * n - iOne)) -
    pi (n - iOne);
}


int
main ()
{
  int n, i;
  scanf ("%d", &n);
  for (i = 10; i < n; i += 10)
    printf ("%f\n", pi (i));

  return 0;
}