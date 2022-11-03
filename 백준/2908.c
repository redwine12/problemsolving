#include <stdio.h>
#include <time.h>
#pragma warning(disable:4996)
#include <string.h>


int main(int argc, const char * argv[]){
    int a,b, newa =0, newb =0;
    scanf("%d %d", &a, &b);
    while (a>=1 && b>=1){
        newa *= 10;
        newa += a%10;
        a /= 10;
        
        newb *= 10;
        newb += b%10;
        b /= 10;
    }
    
    printf("%d\n", (newa>newb) ? newa:newb);
    
    return 0;
}
