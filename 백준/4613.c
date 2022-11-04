#include <stdio.h>
#include <time.h>
#pragma warning(disable:4996)
#include <string.h>


int main(int argc, const char * argv[]){
    char str[256];
    int temp = 0;
    while(1){
        gets(str);
        
        if (str[0] == '#')
            break;
        
        int sum = 0;
        for (int i=0; i<strlen(str); i++){
            if (str[i] == ' ')
                temp = 0;
            else{
                temp = str[i];
                temp -= 64;
            }
            sum += temp*(i+1);
        }
        printf("%d\n", sum);
    }

    return 0;
}
