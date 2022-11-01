#include <stdio.h>
#include <time.h>
#include <string.h>

int main(int argc, const char * argv[]){
    int num=0, avg=0, arr[1000] = {0, };
    
    for(int i=0; i<10; i++){
        int index = 0;
        scanf("%d", &num);
        avg += num;
        arr[num/10]++;
    }
    
    int max =0;
    for(int i=0; i<100; i++){
        if (arr[i]>max)
            max = i;
    }
    
    avg /= 10;
    max *=10;
    printf("%d\n%d\n", avg, max);
    return 0;
}

