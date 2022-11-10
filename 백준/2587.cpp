#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    vector<int> v;
    int n, avg = 0;
    
    for(int i=0; i<5; i++){
        cin >> n;
        v.push_back(n);
        avg += n;
    }

    sort(v.begin(), v.end());
    int index = v.size()/2;
    cout << avg/5<< "\n" << v[index] << "\n";
    
    return 0;
}
