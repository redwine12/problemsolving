#include <stdio.h>
#include <time.h>
#pragma warning(disable:4996)
#include <string.h>


int main(int argc, const char * argv[]){
    char chess[8][8];
    int count = 0;
    
    for(int i=0; i<8; i++){
            scanf("%s", chess[i]);
    }
        
        for (int i=0; i<8; i++){
            int temp;
            if (i%2 == 0)
                temp = 0;
            else
                temp = 1;
            for(int j = temp; j<8; j+=2){
                if (chess[i][j] == 'F')
                    {
                        count++;
                    }
            }
        }
    printf("%d\n", count);
    
    return 0;
}
