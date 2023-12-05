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

    int input;
    vector<int> v;
    for(int i=0; i<8; i++){
        cin >> input;
        v.push_back(input);
    }
    
    int t=5;
    vector<int> newv;
    vector<int> index;
    while(t--){
        int max=0, maxindex;
        for(int i=0; i<v.size(); i++){
            if(v[i]>max){
                max = v[i];
                maxindex = i;
            }
        }
        
        newv.push_back(max);
        index.push_back(maxindex);
        v[maxindex] = 0;
        
    }
    
    int ans = 0;
    for(int i=0; i<newv.size(); i++){
        ans += newv[i];
    }
    
    sort(index.begin(), index.end());
    
    cout << ans << endl;
    for(int i=0; i<index.size(); i++)
        cout << index[i]+1 << " ";
        
    cout << "\n";
    return 0;
}
