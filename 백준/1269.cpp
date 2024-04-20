#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#pragma warning(disable:4996)
#include <string>
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

vector<int> v1, v2;

map<int, bool> mpA;
map<int, bool> mpB;
int a,b, num;

int solve(int a, int b){
    int count = 0;
    for(int i=0; i<a; i++){
        if(mpB[v1[i]]) continue;
        else count++;
    }

    for(int i=0; i<b; i++){
        if(mpA[v2[i]]) continue;
        else count++;
    }
    return count;
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> a >> b;
    for(int i=0; i<a; i++){
       cin >> num;
       v1.push_back(num);
       mpA[num] = 1;
    }
    
    for(int i=0; i<b; i++){
        cin >> num;
        v2.push_back(num);
        mpB[num] = 1;
    }
    
    cout << solve(a,b) << endl;
    
    return 0;
}
