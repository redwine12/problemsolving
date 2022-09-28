// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n; // 과목개수
    int m=0; // 점수중 최대값
    float avg = 0; // 평균
    
    scanf("%d", &n);
    double arr[1000];
    
    for (int i=0; i<n; i++)
    {
        scanf("%lf", &arr[i]);
        if (arr[i] > m)
        {
            m = arr[i];
        }
    }
    
    for (int i=0; i<n; i++)
    {
        arr[i] = arr[i]/m*100;
        avg = avg + arr[i];
    }
    
    printf("%.2f", avg/n);
    
    
    


    return 0;
}