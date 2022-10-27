#include <stdio.h>
#include <time.h>

int main() {
  int t,y,k = 0;
  int ysc, tsc = 0;
  scanf("%d", &t);

  for (int i=0; i<t; i++){
    for (int j=1; j<=9; j++)
      {
        scanf("%d %d", &y, &k);
        ysc += y;
        tsc += k;
      }
    if (ysc > tsc) {printf("Yonsei\n");}
    else if (ysc = tsc) {printf("Draw\n");}
    else{
      printf("Korea\n");
    }
  }
  
  return 0;
}