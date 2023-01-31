#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m, card;
    cin >> n >> m;
    
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> card;
        v.push_back(card);
    }
    
    int ans = 0;
    for(int i=0; i<v.size(); i++)
        for(int j=i+1; j<v.size(); j++)
            for(int k=j+1; k<v.size(); k++){
                if(v[i]+v[j]+v[k] <= m && v[i]+v[j]+v[k]>ans)
                    ans = v[i]+v[j]+v[k];
            }
    
    cout << ans << endl;
    
    return 0;
}
