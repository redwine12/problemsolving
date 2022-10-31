#include <stdio.h>
#include <time.h>
#include <string.h>

int main(int argc, const char * argv[]){
    int n =0, f=0,newn=0, temp=0,temp2 = 0, num = 0, ans =0;
    scanf("%d %d", &n, &f);
    
    temp = n/10;
    num = (n%10) + (temp%10)*10;
    newn = n - num;
    
    while(1){
        if(newn%f == 0)
        {
            break;
        }
        newn++;

    }
    
    temp2 = newn/10;
    ans =  (newn%10) + (temp2%10)*10;
    
    
    if (ans<10)
        printf("0%d\n", ans);
    else
        printf("%d\n", ans);
    
    return 0;
}
