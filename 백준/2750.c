#include <stdio.h>
#include <time.h>
#include <string.h>

int main(int argc, const char * argv[]){
    int n, temp = 0;
    scanf("%d", &n);
    int arr[1000] = {0, };
    
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    for (int i=0; i<n; i++){
        for (int j=0; j<n-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int i=0; i<n; i++)
        printf("%d\n", arr[i]);

    return 0;
}
