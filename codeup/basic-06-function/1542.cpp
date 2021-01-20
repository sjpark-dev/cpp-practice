#include <stdio.h>

int n;

void f(int n) {
    int i;
    for (i=2; i*i<=n; i++) {
        if (n%i==0) {
            printf("composite\n");
            return;
        }
    }
    printf("prime\n");
}

int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
