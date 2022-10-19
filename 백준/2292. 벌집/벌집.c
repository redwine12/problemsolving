#include <stdio.h>
int main() {
  int n, room = 1;
  int sum = 1;
  scanf("%d", &n);

  if (n == 1)
    {
        printf("1");
        return 0;
    }
  
  while(1)
    {  
      if (n <= sum)
        break;

      sum += 6*room;
      room++;
    }

  printf("%d", room);
  
  return 0;
}