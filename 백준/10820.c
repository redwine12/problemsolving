#include <stdio.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int main(int argc, const char * argv[]){

    char str[100];
    while (gets(str)){
        int down =0, up=0, num=0, space=0;
        for (int i=0; i<strlen(str); i++)
        {
            if (isupper(str[i]))
                up++;
            if (islower(str[i]))
                down++;
            if (isdigit(str[i]))
                num++;
            if (isspace(str[i]))
                space++;
        }
        printf("%d %d %d %d\n", down, up, num, space);
    }

    return 0;
}
