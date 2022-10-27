#include <stdio.h>
#include <string.h>
#include <time.h>

int main(){
  char word[100000] = {0, };
  scanf("%s", word);

    printf("%c", word[0]);
    for (int i=1; i<strlen(word); i++)
      {
        if (i%10 == 0)
        {
          printf("\n");
        }
        printf("%c", word[i]);
      }

  return 0;
}