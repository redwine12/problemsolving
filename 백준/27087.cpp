#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

int t, p;
vector<int> v(3);

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> t;
    while(t--)
    {
        int count = 0;
        
        for(int i=0; i<3; i++){
            cin >> v[i];
        }
        
        cin >> p;
        
        for(int i=0; i<3; i++){
            if(v[i]%p==0) count++;
        }
        
        
        if(count >= 2) cout << "1" << endl;
        else cout << "0" << endl;
    }
    
    return 0;
}
