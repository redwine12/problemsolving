#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, k, score;
    vector<int> v;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> score;
        v.push_back(score);
    }
        
    sort(v.begin(), v.end(), greater<int>());
    cout << v[k-1] << "\n";
  
    return 0;
}
