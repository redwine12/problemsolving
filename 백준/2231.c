#include <stdio.h>
#include <time.h>
#pragma warning(disable:4996)
#include <string.h>


int main(int argc, const char * argv[]){
    int n;
    scanf("%d", &n);
    
    for (int i=1; i<=n; i++){
        int sum = 0;
        int temp = i;
        while (temp>0){
            sum += temp%10;
            temp /= 10;
        }
        if (sum+i == n){
            printf("%d\n", i);
            return 0;
        }
        if (i == n){
            printf("0\n");
            return 0;
        }
    }
}
