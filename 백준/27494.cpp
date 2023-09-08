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

int n;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    
    int count(0);
    for (int cur=2023; cur<=n; cur++) {
        bool flag = false;
        string str = to_string(cur);
        int len = str.size();
        if(flag) continue;
        for (int i = 0; i <= len - 4; i++) {
            if(flag) continue;
            if(str[i] != '2') continue;
            for (int j = i + 1; j <= len - 3; j++) {
                if(flag) continue;
                if(str[j] != '0') continue;
                for (int k = j + 1; k <= len - 2; k++) {
                    if(flag) continue;
                    if(str[k] != '2') continue;
                    for (int l = k + 1; l <= len - 1; l++) {
                        if(flag) continue;
                        if (str[i] == '2' && str[j] == '0' && str[k] == '2' && str[l] == '3'){
                            count++;
                            flag = true;
                        }
                    }
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}
