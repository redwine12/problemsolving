#include <stdio.h>
#include <time.h>
#pragma warning(disable:4996)
#include <string.h>


int main(int argc, const char * argv[]){
    long long a, b, big=0, small =0, size = 0;
    scanf("%lld %lld", &a, &b);
    if (a==b){
        printf("0\n");
        return 0;
    }
    big = (a>b) ? a:b;
    small = (a<b) ? a:b;
    size = big - small - 1;
    
    printf("%lld\n", size);
    for(long long i=small+1; i<big; i++){
        printf("%lld ",i);
    }
    

    return 0;
}
