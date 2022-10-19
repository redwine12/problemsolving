
#include <stdio.h>

int main() {
  int h, m;
  int time;

  scanf("%d %d", &h, &m);
  scanf("%d", &time);

  if (time>=60)
  {
    h += time/60;
    m += time%60;
    if (m>=60)
    {
      h += 1;
      m -= 60;

    }

  }

  else if (time <60)
    m += time;
     if (m>=60)
    {
      h += 1;
      m -= 60;
    }
    if (h>=24)
    {
      h -= 24;    
    }


    if (h>=24)
    {
      h -= 24;    
    }

  printf("%d %d", h, m);
  
  
}