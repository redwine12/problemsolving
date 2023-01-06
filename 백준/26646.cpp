#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>

using namespace std;

int t, num, wirepos=1, x, h, price=0;
vector<int> v;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> num;
        v.push_back(num);
    }
    
    int sum;
    for(int i=0; i<v.size()-1; i++){
        x = v[i]+v[wirepos];
        h = abs(v[wirepos] - v[i]);
        price += pow(x,2) + pow(h,2);
        wirepos++;
    }
    
    
    cout << price << endl;
    return 0;
}
