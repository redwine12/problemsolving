#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t, input;
    while(1){
        cin >> t;
        if(t == 0)
            return 0;
        vector<int> v;
        for(int i=0; i<t; i++){
            cin >> input;
            v.push_back(input);
        }
        v.erase(unique(v.begin(), v.end()), v.end());
        for(int i=0; i<v.size(); i++){
            cout << v[i] << " ";
        }
        cout << "$" << "\n";
    }
    
    return 0;
}
