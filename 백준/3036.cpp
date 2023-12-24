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

int n;

int GCD(int x, int y){
    if(y==0) return x;
    else return GCD(y, x%y);
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    
    int first = v[0];
    for(int i=1; i<n; i++){
        int temp = GCD(first, v[i]);
        cout << first/temp << "/" << v[i]/temp << endl;
    }
    
    return 0;
}
