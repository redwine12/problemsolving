#include <stdio.h>

int main(void) {
  int n;
  int num, score = 0;
  int count = 0;
  scanf("%d", &n);

  for (int i=0; i<n; i++)
    {
      scanf("%d", &num);
      if (num == 1)
      {
        count ++;
        score += count;
      }
      else if (num == 0)
        count = 0;
    }

  printf("%d", score);
  return 0;
}