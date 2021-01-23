#include <stdio.h>

long long int n;

long long int abs(long long int x) {
  return x < 0 ? -x : x; 
}

int main()
{
  scanf("%lld", &n);
  printf("%lld\n", abs(n));
  return 0;
}
