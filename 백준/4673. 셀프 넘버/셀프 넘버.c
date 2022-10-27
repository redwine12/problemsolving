
#include <stdio.h>

int selfnum(int n) //셀프넘버가 아닌 수를 구하는 함수이다.
{ int sum = n;
while (n > 0){ sum += n%10;
    n = n/10;
}
    return sum;
}

int main() {
    int arr[10001];
    int i, check;
    
    for (i = 1; i<10001; i++)  // 셀프넘버가 아닌수를 배열의 위치값에 두고 해당값을 123
    {
        check = selfnum(i);
        if(check<10001)
            arr[check] = 123;
    }
    for (i=1; i<10001; i++)
    {
        if (arr[i] != 123) // 셀프넘버가 아닌 수의 번째 배열을 빼고 출력
            printf("%d\n", i);
    }
}