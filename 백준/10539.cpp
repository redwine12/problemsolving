#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    long long input;
    long long v[101] = {0, };
    
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> input;
        v[i] = input;
    }
    
    long long tempsum = v[0];
    long long arr[101] = {0, };
    arr[0] = v[0];
    for(int i=1; i<n; i++){
        arr[i] = (v[i]*(i+1)) - tempsum;
        tempsum += arr[i];
    }
    
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
