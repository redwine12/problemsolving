#include <stdio.h>
#include <string.h>
 
 
int main() {
 
    int t;
    scanf("%d", &t);
    int a;
    int cnt = 0;
    for (int i = 6; i >= 0; i--) 
        {
          a = target >> i & 1;
          if (a == 1) {
              cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}
