#include <stdio.h>

int n;

long long int d[110];

long long int f() {
    int i, mn = d[1];
    for (i=2; i<=n; i++) {
        if (d[i]<mn) mn = d[i];
    }
    return mn;
}

int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%lld", &d[i]);

  printf("%lld", f());
  return 0;
}
