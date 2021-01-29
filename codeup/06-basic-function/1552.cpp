#include <stdio.h>

double x;

double f(double n) {
    return x - (long long int) n;
}

int main()
{
  scanf("%lf", &x);
  printf("%.14lf\n", f(x));
}
