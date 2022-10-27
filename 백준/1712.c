
#include <stdio.h>
#include <string.h>
#include <time.h>

int main(){
  int a,b,c = 0;

  scanf("%d %d %d", &a, &b, &c);
  // a+x*b < c*x
  if (b>=c)	
    printf("-1\n");
  else
    printf("%d\n",a/(c-b)+1);
  
  return 0;
    
}
