#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

vector<string> v;
string str;
int n;

bool compare(string str1, string str2){
    if(str2.size() != str1.size())
        return str1.size() < str2.size();
    
    else {
        int sum1 = 0;
        for(int i=0; i<str1.size(); i++){
            if(str1[i]-'0' >= 0 && str1[i]-'0' <= 9)
                sum1 += str1[i] - '0';
        }
        
        int sum2 = 0;
        for(int i=0; i<str2.size(); i++){
            if(str2[i]-'0' >= 0 && str2[i]-'0' <= 9)
                sum2 += str2[i] - '0';
        }
        
        if(sum1 != sum2) return sum1 < sum2;
        else return str1 < str2;
    }
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> str;
        v.push_back(str);
    }
    
    sort(v.begin(), v.end(), compare);
    
    for(auto c : v)
        cout << c << endl;
    
    return 0;
}
