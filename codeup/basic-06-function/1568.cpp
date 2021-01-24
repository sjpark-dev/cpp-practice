#include <stdio.h>

int n, a, b, d[1010];

int maxi(int x, int y) {
  int i, mxi = x;
  for (i=x+1; i<=y; i++) {
    if (d[i]>d[mxi]) mxi = i;
  }
  return mxi;
}

int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d%d", &a, &b);

  printf("%d\n", maxi(a, b));
}
