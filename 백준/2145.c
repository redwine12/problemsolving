#include <stdio.h>
#include <time.h>
#pragma warning(disable:4996)
#include <string.h>


int main(int argc, const char * argv[]){
    int num;
    while(1){
        int sum = 0, newsum = 0;
        scanf("%d", &num);
        if (num == 0)
            return 0;
        
        while (num>0)
        {
            sum += num%10;
            num /= 10;
        }
        if (sum < 10)
            printf("%d\n", sum);
        else
            {
                while(sum > 0){
                    newsum += sum%10;
                    sum /= 10;
                }
                printf("%d\n", newsum);
            }
    }
    return 0;
}
