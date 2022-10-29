#include <stdio.h>
#include <time.h>
#include <string.h>

int arr[1000001];

int main(int argc, const char * argv[]){
    int n, b, c;
    long long ans = 0;
    int temp = 0, sub = 0, sub2 = 0;
    
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    scanf("%d %d", &b, &c);
    
    for (int i=0; i<n; i++){
        temp = arr[i] - b;
        ans++;
        if (temp>0){
            sub = temp/c;
            sub2 = temp%c;
            if (sub2>0){
                sub2 = 1;
            }
            ans += sub + sub2;
        }
    }
    
    printf("%lld\n", ans);
    

    return 0;
}

/*
// 첫번째 풀이 ( 시간초과 에러 )
 
 int main(int argc, const char * argv[]){
     int n, b, c;
     long long ans = 0;
     int temp = 0, sub = 0, sub2 = 0;
     
     scanf("%d", &n);
     for(int i=0; i<n; i++){
         scanf("%d", &arr[i]);
     }
     
     scanf("%d %d", &b, &c);
     
     for (int i=0; i<n; i++){
         temp = arr[i] - b;
         ans++;
         if (temp>0){
             sub = arr[i]/c;
             sub2 = arr[i]%c;
             if (sub2>0){
                 sub2 = 1;
             }
             ans += sub + sub2;
         }
     }
     
     printf("%lld\n", ans);
*/
