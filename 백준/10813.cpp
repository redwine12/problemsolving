#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m;
    vector<int> v;
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        v.push_back(i);
    }
    v.insert(v.begin(), 0);
    
    int a,b;
    for(int i=1; i<=m; i++){
        cin >> a >> b;
        swap(v[a], v[b]);
    }
    
    for(int i=1; i<v.size(); i++){
        cout << v[i] << " ";
    }
    
    return 0;
}
