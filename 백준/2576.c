#include <stdio.h>

int main() {
  int num, count = 0;
  int min = 100;

  for(int i=0; i<7; i++)
    {
      scanf("%d", &num);
      if (num%2 != 0)
        {
          count += num;
          if (num < min)
            min = num;
        }
      
    }
  if (count == 0)
    printf("-1");
  else
  {
    printf("%d\n",count);
    printf("%d\n",min);
  }
  return 0;
}