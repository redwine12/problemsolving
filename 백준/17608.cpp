#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, h;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> h;
        v.push_back(h);
    }
    
    int count = 0, max = 0, len = v.size();
    for (int i=len-1; i>=0; i--){
        if(v[i] > max){
            max = v[i];
            count++;
        }
    }
    
    cout << count << "\n";
    
    return 0;
}

