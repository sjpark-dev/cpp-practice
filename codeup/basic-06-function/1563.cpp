#include <stdio.h>

int n, m, x;

int max(int p, int q){ return p>=q?p:q;}

int min(int p, int q){ return p<q?p:q;}

int mid(int a, int b, int c) {
  int mn, mx;
  mn = min(a, b);
  mn = min(mn, c);
  mx = max(a, b);
  mx = max(mx, c);
  if ((a==mn && b==mx) || (a==mx && b==mn)) return c;
  if ((b==mn && c==mx) || (b==mx && c==mn)) return a;
  if ((c==mn && a==mx) || (c==mx && a==mn)) return b;  
}

int main()
{
  scanf("%d%d%d", &n, &m, &x);
  printf("%d\n", mid(n, m, x));
}
