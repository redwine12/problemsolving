#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#pragma warning(disable:4996)
#include <string>
#include <sstream>
#include <math.h>
#define endl '\n'
#define MAX

using namespace std;
typedef long long ll;

double x, y,z;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> x >> y;
    z = (y*100)/x;
    z= floor(z);
    if(z>=99){
        cout << -1 << endl;
        return 0;
    }
    
    int low = 0, high = 1000000000;
    int ans;
    while(low <= high){
        int mid = (low+high)/2;
        int temp = ((y+mid)*100)/(x+mid);
        if(z >= temp){
            ans = mid+1;
            low = mid+1;
        }
        else high = mid-1;
    }
    
    cout << ans <<endl;
    return 0;
}
