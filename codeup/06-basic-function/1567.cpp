#include <stdio.h>

int n, a, b, d[1010];

long long int subsetsum(int x, int y) {
  int i;
  long long int sum = 0;
  for (i=x; i<=y; i++) {
    sum += d[i];
  }
  return sum;
}

int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d%d", &a, &b);

  printf("%lld\n", subsetsum(a, b));
}
