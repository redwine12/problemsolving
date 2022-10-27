#include <stdio.h>
#include <time.h>

int main() {
  int t = 0;
  int count[3] = {0,0,0};
  int range[] = {300,60,10};
  scanf("%d", &t);

  if (t % 10 == 0)
  {
    for (int i = 0; i<3; i++)
      {
        if (t >= range[i])
        {
          t -= range[i];
          count[i]++;
          i--;
        }
      }
      printf("%d %d %d", count[0], count[1], count[2]);
    }

  else {
    printf("-1"); 
  }

  return 0;
}