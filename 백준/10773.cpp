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

    int k, num;
    cin >> k;
    vector<int> v;
    for(int i=0; i<k; i++){
        cin >> num;
        if(num == 0)
            v.pop_back();
        else
            v.push_back(num);
    }
    
    int ans =0;
    for(int i=0; i<v.size(); i++)
        ans += v[i];
    
    cout << ans << endl;
    
    return 0;
}
