#include <stdio.h>

int mymax(int x, int y) {
  return x >= y ? x : y;
}

main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", mymax(a, b));
}
