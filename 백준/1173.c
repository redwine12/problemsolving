#include <stdio.h>

int main() {
  int firstmac, t, r, m, work = 0; //
  int time, mac, exe = 0;
  scanf("%d %d %d %d %d", &work, &firstmac, &m, &t, &r);

  mac = firstmac;

  if (firstmac+t>m)
    printf("-1");

  else
  {
    while(work > exe)
    {
      if (mac+t<=m)
        mac += t, time++, exe++;
        
      else
      {
        if (mac - r < firstmac)
          mac = firstmac, time++;
        else
          mac -= r, time++;
      }
      
    }
      printf("%d", time);
  }  
   
  

  
  
  return 0;
}