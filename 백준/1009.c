#include <stdio.h>

int main() {
    int t; 
    int a, b;
    scanf("%d", &t);
  
    for (int i=0; i<t; i++)
    {
        int com = 1;
        scanf("%d %d", &a, &b);
        for (int j=0; j<b; j++)
        {
            com *= a;
            com %= 10;
        }
    if (com == 0) { printf("10\n"); }
    else { printf("%d\n", com); }
    }
}