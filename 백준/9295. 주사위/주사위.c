
#include <stdio.h>

int main() {
  int t;
  int num1, num2;
  scanf("%d", &t);
  for (int i=1; i<=t; i++)
    {
      scanf("%d %d", &num1, &num2);
      printf("Case %d: %d\n", i, num1+num2);
    }
  
  return 0;
}
