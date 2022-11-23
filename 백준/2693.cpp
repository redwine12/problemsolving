#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int input , t;
    cin >> t;
    while(t--){
        vector<int> v;
        for(int i=0; i<10; i++){
            cin >> input;
            v.push_back(input);
        }
        int max=0;
        for(int i=0; i<2; i++)
            v.erase(v.begin() + (max_element(v.begin(), v.end()) - v.begin()));
        
        max = 0;
        for(int i=0; i<v.size(); i++){
            if(v[i] > max)
                max = v[i];
        }
        cout << max << endl;
    }
    return 0;
}
