#include <stdio.h>
#include <time.h>
#include <string.h>

int main(int argc, const char * argv[]){
    int t;
    scanf("%d", &t);
    for (int i=1; i<=t; i++){
        int n=0, ans=0, max = 0, min = 100, shop;
        scanf("%d", &n);
        for (int j=0; j<n; j++)
        {
            scanf("%d", &shop);
            max = (shop>max) ? shop:max;
            min = (shop<min) ? shop:min;
        }
        ans += max - min;
        printf("%d\n", ans*2);
    }
    return 0;
}
 
    /* 첫번째 풀이_breakpoint error
    int t, n;
    scanf("%d", &t);
    for (int i=1; i<=t; i++){
        int shop[20], temp, ans;
        scanf("%d", &n);
        for (int j=0; j<n; j++)
        {
            scanf("%d", &shop[i]);
        }
        //array.sort
        for (int k=0; k<n; k++){
            for (int l=0; l<n-k; l++)
            {
                if (shop[k]>shop[k+1])
                    temp = shop[k];
                    shop[k] = shop[k+1];
                    shop[k+1] = temp;
            }
        }
        for (int j=0; j<n; j++)
        {
            ans += shop[j+1] - shop[j];
        }
        printf("%d\n", ans*2);
    }
*/
 
