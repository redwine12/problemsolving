#include <stdio.h>

int main() {
    int n; //과목 개수
    scanf("%d", &n);
    float score[n];
    int max = 0;
    float avg;
    
    for (int i=0; i<n; i++)
    {
        scanf("%f", &score[i]);
        if (score[i] > max){
            max = score[i];}
        
    }
    
    for (int i=0; i<n; i++)
    {
        avg += score[i] / max*100;
    }
    
    printf("%f", avg/n);

    
    
    
    
    
    

}