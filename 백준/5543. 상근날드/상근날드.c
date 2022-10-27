
#include <stdio.h>

int main() {
  int hamburger[3];
  int drink[2];
  int min_ham = 2000;
  int min_drink = 2000;

  for (int i=0; i<3; i++)
    {
      scanf("%d", &hamburger[i]);
      if (min_ham > hamburger[i])
        min_ham = hamburger[i];
    }
  for (int i=0; i<2; i++)
    {
      scanf("%d", &drink[i]);
      if (min_drink > drink[i])
        min_drink = drink[i];
    }
printf("%d", min_ham + min_drink - 50);
  
}