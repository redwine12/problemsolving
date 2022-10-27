#include <stdio.h>
#include <string.h>
#include <time.h>

int main(){
  int t, n = 0;
  scanf("%d", &t);

  for (int i=0; i<t; i++){
    int max = -1000000;
    int min = 1000000;
    int a = 0;
    scanf("%d", &n);
    for (int j=0; j<n; j++){
      scanf("%d", &a);
        if (a > max) {max=a;}
        if (a < min) {min=a;}
    }
    printf("%d %d\n", min, max);
  }


  

  return 0;
}