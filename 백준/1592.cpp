#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m, l;
    cin >> n >> m >> l;
    
    vector<int> v(n+1,0);
    
    //if ( i-l < 0 )  i = (n+i) - l
    int count=0, i=1;
    v[i] = 0;
    while(1){
        if(v[i] == m){
            cout << count << "\n";
            return 0;
        }
        if (v[i] % 2 == 0){
            if (i-l < 1)
                i = (n+i)-l;
            else
                i -= l;
        }
        
        else if (v[i]%2 != 0){
            if (i+l > n)
                i = (i-n) + l;
            else
                i += l;
        }
        count++;
        v[i]++;
    }
}
