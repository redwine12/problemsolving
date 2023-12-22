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

int n, m, ans;
vector<int> vper, vset;

int findMin(int a, int b, int c){
    int minn = ((a<b) && (a<c)) ? a : ((b<a) && (b<c)) ? b : c;
    return minn;
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n >> m;
    
    int per, set, minset = 1001, minper = 1001;
    for(int i=0; i<m; i++){
        cin >> set >> per;
        minset = min(minset, set);
        minper = min(minper, per);
    }
    
    int setprice = minset * (n/6 + 1);
    int perprice = minper * n;
    int bothprice = (minset * (n/6)) + (minper * (n%6));
    
    cout << findMin(setprice, perprice, bothprice) << endl;
    
    //    int ans2 = min(min(setprice, perprice), bothprice);
    //    cout << ans2 << endl;
    
    return 0;
}
