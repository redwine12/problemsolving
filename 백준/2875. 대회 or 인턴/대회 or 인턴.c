
#include <stdio.h>

int main() {
    int n, m, k;
    int team;
    scanf("%d %d %d", &n, &m, &k);

    int max; //최대 팀 수
    if (n/2 < m)
        max = n/2;
    else if (n/2 >= m)
        max = m;
        
    k -= n + m - 3*max;
    
    if (k>0)
    {
        k--;
        max -= k / 3 + 1;
    }
    
    printf("%d", max);

}