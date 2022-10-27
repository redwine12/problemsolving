
#include <stdio.h>
#include <string.h>

int main() {
  char arr[1000000];
  scanf("%[^\n]", arr);
  int count = 0, len;

  len = strlen(arr);

  if (len == 1) {
    if (arr[0] == ' '){
        printf("0\n");
        return 0;}
  }

  for (int i = 1; i < len-1; i++) { //맨 처음과 끝에 공백이 오는것은 count해주면 안되므로, i=1 && len-1전까지만
    if (arr[i] == ' ') 
      count++;
  }

  printf("%d", count + 1);
  return 0;
}
