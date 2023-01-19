#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    vector<int> v1(t);
    vector<int> v2(t);
    
    for(int i=0; i<t; i++){
        cin >> v1[i];
    }
    for(int i=0; i<t; i++){
        cin >> v2[i];
    }
    
    sort(v1.begin(), v1.end());
    sort(v2.rbegin(), v2.rend());
    
    int ans = 0;
    for(int i=0; i<t; i++){
        ans+=v1[i]*v2[i];
    }
    
    cout << ans << endl;
    return 0;
}
