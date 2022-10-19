#include <stdio.h>
int main() {
  int a,b,c,z, mul;
  int arr[10]={0,};

  scanf("%d %d %d", &a, &b, &c);
  mul = a*b*c;
  
  while (1)
    {
      if (mul == 0)
        break;
      z = mul%10;
      mul /= 10;
      arr[z] += 1;
    }

  for (int i=0; i<10; i++)
    {
      printf("%d\n", arr[i]);
    }
  return 0;
}