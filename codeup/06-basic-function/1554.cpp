#include <stdio.h>

double x;

long long int f(double n) {
    if (n>=0) return n;
    else {
        long long int a = (long long int) n;
        if (n<a) return a - 1;
        else return a;
    }
}

int main()
{
  scanf("%lf", &x);
  printf("%lld\n", f(x));
}
