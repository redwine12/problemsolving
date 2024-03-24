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

int n,k, num, sum, ans=-1000000000;
vector<int> v;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n >> k;
    
    for(int i=0; i<n; i++){
        cin >> num;
        v.push_back(num);
    }
    
    int sum = 0, left = 0, right = k-1;;
    for(int i=left; i<=right; i++)
        sum += v[i];
    
    if(sum > ans) ans = sum;
    
    while(right<n-1){
        int next = sum - v[left] + v[right+1];
        
        if(next > ans) ans = next;
        sum = next;
        
        right++; left++;
    }
    
    cout << ans << endl;
    return 0;
}
