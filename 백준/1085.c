#include <stdio.h>
#include <string.h>
#include <time.h>

int main(){
  int x,y,w,h =0;
  int less = 0;
  scanf("%d %d %d %d", &x,&y,&w,&h);

  if (x < w-x)
    x = w-x;
  if (y < h-y)
    y = h-y;

  if (w-x<=h-y){
    less = w-x;
  }
  else
    less = h-y;
  printf("%d", less);
  
  return 0;
}