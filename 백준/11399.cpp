#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

int n;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    int count = 0;
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<=i; j++){
            count += v[j];
        }
    }
    
    cout << count << endl;
    return 0;
}

