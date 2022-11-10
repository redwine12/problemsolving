
#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]){
    
    int t;
    scanf("%d", &t);

    while(t){
        int count = 0;
        char n1[101], n2[101];
        scanf("%s %s", n1, n2);
        for (int i=0; i<strlen(n1); i++){
            if (n1[i] != n2[i])
                count++;
        }
        printf("%d\n", count);
        t--;
    }
    
    return 0;
}

