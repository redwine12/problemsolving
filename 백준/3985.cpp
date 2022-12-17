#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int arr[1001] = {0, };
    int count[1001] = {0, };
    int l, num, a, b, ans, max = 0, maxwish, maxans = 0;
    cin >> l >> num;
    for(int i=1; i<=num; i++){
        cin >> a >> b;
        if(b-a > max){
            max = b-a;
            maxwish = i;
        }
            
        for(int j=a; j<=b; j++){
            if(arr[j] == 0){
                arr[j] = i;
                count[i]++;
            }
        }
    }
    
    for(int i=1; i<=num; i++){
        if(count[i] > maxans)
            {
                maxans = count[i];
                ans = i;
            }
    }
    
    cout << maxwish << "\n" << ans << endl;
    return 0;
}
