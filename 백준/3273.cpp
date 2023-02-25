#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

int n, num, input;
vector<int> v;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    while(n--){
        cin >> input;
        v.push_back(input);
    }
    
    cin >> num;
    sort(v.begin(), v.end());
    
    int count =0, left = 0, right=v.size()-1;
    
    while(1){
        if(left >= right) break;
        if(v[left] + v[right] == num){
            count++; right--; left++;
        }
        else if(v[left] + v[right] < num) left++;
        else right--;
    }

    cout << count << endl;
    return 0;
}
