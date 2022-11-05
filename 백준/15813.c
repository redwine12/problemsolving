#include <stdio.h>
#include <time.h>
#pragma warning(disable:4996)
#include <string.h>


int main(int argc, const char * argv[]){
    int len, sum = 0;
    char name[101];
    scanf("%d", &len);
    scanf("%s", name);
    for(int i=0; i<len; i++){
        sum += name[i] - 64;
    }
    
    printf("%d\n", sum);
    

    return 0;
}
