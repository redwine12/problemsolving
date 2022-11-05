#include <stdio.h>
#include <time.h>
#pragma warning(disable:4996)
#include <string.h>


int main(int argc, const char * argv[]){
    int test;
    while(1){
        scanf("%d", &test);
        if (test == 0)
            return 0;
        int arr[test];
        int newarr[26] = {0, };
        for (int i=0; i<test; i++){
            scanf("%d", &arr[i]);
        }
        int len = sizeof(arr)/sizeof(arr[0]);
        newarr[0] = arr[0];
        int j=1;
        //printf("배열의 길이는 %d\n\n\n\n", len);
        for (int i=1; i<len; i++){
            if (arr[i] != newarr[j-1]){
                newarr[j] = arr[i];
                j++;
            }
        }
        //printf("j의 값은 %d\n\n", j);
        for (int i=0; i<26; i++)
        {
            if (newarr[i] != 0)
                printf("%d ", newarr[i]);
        }
        printf("$\n");
    }
    return 0;
}
