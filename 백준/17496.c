#include <stdio.h>
#include <time.h>

int main() {
  int fullday, i, ground, money, n = 0;
  int profit = 0;
  scanf("%d %d %d %d", &n, &fullday, &ground, &money);

  while (n>0){
    if (n-fullday<=0) {
      break;
    }
    n -= fullday;
    profit += money*ground;
  }

  printf("%d", profit);
  return 0;
}