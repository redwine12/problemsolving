#include <stdio.h>

int main(void) {
  int num[9], max = 0, count = 0;
  for (int i = 0; i < 9; i++)
    {
      scanf("%d", &num[i]);
      if (num[i] > max)
      {
        max = num[i];
        count = i + 1;
      }
    }
  printf("%d\n", max);
  printf("%d", count);
}