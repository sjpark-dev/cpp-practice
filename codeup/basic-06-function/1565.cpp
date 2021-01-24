#include <stdio.h>

int gcd(int p, int q){ if(p==0) return q; return gcd(q%p, p);}

long long int lcm(int x, int y) {
  return (long long int) x * y / gcd(x, y);
}

int main()
{
  int a, b;
  scanf("%d%d", &a, &b);
  printf("%lld\n", lcm(a, b));
}
