#include <stdio.h>

int main(void) {
  int on, off;
  int sum = 0;
  int max = 0;

  for (int i=1; i<=4; i++)
    {
      scanf("%d %d", &off ,&on);
      sum += on - off;
      if (sum > max)
        max = sum;
    }

  printf("%d", max);
  return 0;
}