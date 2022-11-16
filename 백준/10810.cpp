#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m;
    int arr[101] = {0, };
    cin >> n >> m;
    
    int a, b, ball;
    for(int i=1; i<=m; i++){
        cin >> a >> b >> ball;
        for(int i=a; i<=b; i++){
            arr[i] = ball;
        }
    }
    
    for(int i=1; i<=n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
