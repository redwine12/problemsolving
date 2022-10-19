#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d",&n);
    char num[n];
    scanf("%s", num); 
    // num배열에 숫자들어감
    
    for (int i= 0; i<n; i++)
    {
        sum += num[i]- '0'; //문자열이므로
    }
    printf("%d", sum);
    

}