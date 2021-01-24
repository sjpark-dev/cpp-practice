#include <stdio.h>

float ABS(float n) {
  return n < 0 ? -n : n;
}

int ABS(int n) {
  return n < 0 ? -n : n;
}

main()
{
    float n;
    scanf("%f", &n);
    if (n == (int)n) printf("%d", ABS((int)n));
    else printf("%g", ABS(n));
}
