#include <stdio.h>

int n;

long long int f(int x) {
    int i;
    long long int sum = 0;
    for (i=1; i<=x; i++) {
        sum += i;
    }
    return sum;
}

int main()
{
  scanf("%d", &n);
  printf("%lld\n", f(n));
}
