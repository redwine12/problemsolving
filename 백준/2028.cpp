#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string num = to_string(n);
        string newnum = to_string(n*n);
        if(newnum.find(num) == newnum.size()-num.size())
            // find가 반환해준 index = 자기복제수 조건의 위치
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}

