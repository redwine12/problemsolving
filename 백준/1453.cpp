#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, input, count = 0;
    cin >> n;
    int arr[101] = {0, };
    
    while(n--){
        cin >> input;
        arr[input]++;
    }
    
    for(int i=0; i<101; i++){
        if(arr[i] > 1)
            count += arr[i] - 1;
    }
    cout << count << "\n";
    
    return 0;
}
