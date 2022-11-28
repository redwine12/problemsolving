#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, t, count = 0;
    cin >> n >> t;
    int arr[10000] = {0, };
    while(t--){
        int start, space;
        cin >> start >> space;
        for(int i=start; i<=n; i+=space){
            arr[i]++;
        }
    }
    for(int i=1; i<=n; i++){
        if(arr[i] == 0)
            count++;
    }
    cout << count << endl;
    
    return 0;
}
