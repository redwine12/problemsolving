#include <stdio.h>
int rev(int a)  {
  int sum = 0;
  while(a!=0) 
    {   
        sum=sum*10+a%10; 
        a/=10;
    } 
  return sum;
}

int main() {
  int a,b;
  scanf("%d %d", &a, &b);
  printf("%d", rev(rev(a)+rev(b)));

  return 0;
}