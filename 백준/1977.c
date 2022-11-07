#include <stdio.h>
#include <time.h>
#pragma warning(disable:4996)
#include <string.h>


int main(int argc, const char * argv[]){
    int m, n, ans=0, min=10001;
    scanf("%d %d", &m, &n);
    for (int i=1; i<n; i++){
        if(i*i >= m && i*i <= n)
        {
            ans += i*i;
            if (i*i < min)
                min = i*i;
        }
    }
    if(ans == 0){
        printf("-1\n");
    }

    else{
        printf("%d\n", ans);
        printf("%d\n", min);
    }
}
