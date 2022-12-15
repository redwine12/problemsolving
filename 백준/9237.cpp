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

    int t, tree;
    cin >> t;
    vector<int> v;
    for(int i=0; i<t; i++){
        cin >> tree;
        v.push_back(tree);
    }
    
    sort(v.rbegin(), v.rend());
    int max = 0, day=1, ans;
    for(int i=0; i<v.size(); i++){
        ans = v[i]+day+1;
        if(ans>max)
            max = ans;
        day++;
    }
    
    cout << max << endl;
    return 0;
}

