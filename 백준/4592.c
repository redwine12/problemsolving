#include <stdio.h>
#include <time.h>
#pragma warning(disable:4996)
#include <string.h>


int main(int argc, const char * argv[]){
    // 코드 수정, 배열 사용 X
    // testcast동안 정수 입력받아서 이전 꺼랑 같은 수가
    // 입력되면 출력에서 배제함
    int t, n;
    while(1){
        scanf("%d", &t);
        if (t==0) return 0;
        int temp = -1;
        for (int i=0; i<t; i++){
            scanf("%d",&n);
            if(n != temp)
                {
                    printf("%d ", n);
                    temp = n;
                }
            else if (n == temp)
                continue;
        }
        
        printf("$\n");
    }

    return 0;
}

    // 첫 번째 풀이 - 배열 이용
    // 값을 배열에 저장해서 배열크기만큼 돌리는 동안 중복된 원소를
    // 빼서 새로운 배열을 선언하여 출력함
    // 단점 - 코드가 너무 길어짐
    /*
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
        for (int i=0; i<26; i++)
        {
            if (newarr[i] != 0)
                printf("%d ", newarr[i]);
        }
        printf("$\n");
    }
    return 0;
}
*/

