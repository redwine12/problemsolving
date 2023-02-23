#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long n;
    cin >> n;
    vector<int> v;
    while(n>=1){
        int temp = n%10;
        v.push_back(temp);
        n/=10;
    }
    
    sort(v.rbegin(), v.rend());
    for(int i=0; i<v.size(); i++)
        cout << v[i];
    
    cout << "\n";
    
    return 0;
}

// 간단한 풀이 - [2]string 이용
/*
int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string str;
    cin >> str;
    sort(str.rbegin(), str.rend());
    cout << str;
    
    return 0;
*/
