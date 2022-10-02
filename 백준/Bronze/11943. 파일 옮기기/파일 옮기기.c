
#include <stdio.h>

int main() {
  int a,b;
  int c,d;
  int count = 0;

  scanf("%d %d", &a ,&b);
  scanf("%d %d", &c, &d);

  if (a+d > c+b)
    printf("%d", b+c);
  else if (a+d < c+b)
    printf("%d", a+d);
  else if (a+d == c+b)
    printf("%d", a+d);
}