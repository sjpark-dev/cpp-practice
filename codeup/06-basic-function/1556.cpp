#include <stdio.h>

int n;

long long int f(int x) {
  if (x==1) return 1;
  else return x * f(x-1);
}

int main()
{
  scanf("%d", &n);
  printf("%lld\n", f(n));
}
