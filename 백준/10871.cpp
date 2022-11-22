#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, x, input;
    vector<int> v;
    
    cin >> n >> x;
    for(int i=0; i<n; i++){
        cin >> input;
        v.push_back(input);
    }
    
    for(int i=0; i<v.size(); i++){
        if(v[i]<x)
            cout << v[i] << " ";
    }
    
    cout << "\n";
    return 0;
}
