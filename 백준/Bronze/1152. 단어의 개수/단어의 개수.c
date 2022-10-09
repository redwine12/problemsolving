
#include <stdio.h>
#include <string.h>

int main() {
  char arr[1000000];
  scanf("%[^\n]", arr);
  int count = 0, len;

  len = strlen(arr);

  if (len == 1) {
    if (arr[0] == ' ')
      { 
        printf("0\n");
        return 0;
      }
  }

  for (int i = 1; i < len-1; i++) { 
    if (arr[i] == ' ') {
      count++;
    }
  }

  printf("%d", count + 1);
  return 0;
}
