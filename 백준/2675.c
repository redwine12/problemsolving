#include <stdio.h>
#include <time.h>
#include <string.h>

int main(int argc, const char * argv[]){
    char s[20];
    int r, t;
    scanf("%d", &t);
    
    for(int i=0; i<t; i++){
        char new[160];
        scanf("%d %s", &r, &s);
        for (int j=0; j<strlen(s); j++)
        {
            for (int k=0; k<r; k++)
            {
                printf("%c", s[j]);
            }
        }
        printf("\n");
        
    }

    return 0;
}
