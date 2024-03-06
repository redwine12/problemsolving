#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

int n, m;
vector<int> v1, v2;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    int input;
    
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> input;
        v1.push_back(input);
    }
    sort(v1.begin(), v1.end());
    
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> input;
        v2.push_back(input);
    }

    // search
    for(int i=0; i<m; i++){
        bool flag = false;
        int left = 0, right = n-1;
        while(left<=right){
            int mid = (left+right)/2;
            if(v2[i] > v1[mid]) left = mid+1;
            else if(v2[i] < v1[mid]) right = mid-1;
            else if(v2[i] == v1[mid]){
                flag = true; break;
            }
        }
        if(flag) cout << "1 " ;
        else cout << "0 ";
        
    }
    
    return 0;
}
