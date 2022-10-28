#include <stdio.h>
#include <time.h>
#include <string.h>

int main(int argc, const char * argv[])
{
    long long int sum=0;
    char arr[10005] = {0, };
    char arr2[10005] = {0, };
    scanf("%s %s", arr, arr2);
    for (int i = 0; i < strlen(arr); i++)
    {
        for (int j = 0; j < strlen(arr2); j++)
        {
            sum += ((arr[i] - '0')*(arr2[j] - '0'));
        }
    }
    printf("%lld", sum);
    
    /* 처음 풀이 - 변수 선언을 잘못함
    int a_arr[10000] = {0, };
    int b_arr[10000] = {0, };
    int a = 0, b=0;
    long long int sum =0;
    
    scanf("%d %d", &a, &b);

    
    while (a>0 && b>0){
        for (int i=0; i<10000; i++)
        {
            a_arr[i] = a%10;
            b_arr[i] = b%10;
            a/=10;
            b/=10;
        }
    }
    
    for (int i=0; i<10000; i++){
        for (int j=0; j<10000; j++)
        {
            
            sum += a_arr[i]*b_arr[j];
        }
    }
    printf("%11d\n", sum);
    */
    return 0;
}

