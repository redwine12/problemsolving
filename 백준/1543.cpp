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

string str, word;
int idx(0), ans(0);

void input(){
    getline(cin, str);
    getline(cin, word);
}

void solve() {
    while(1) {
        idx = str.find(word);
        if(idx == string::npos) break;
        str = str.substr(idx + word.size());
        ans++;
    }

    cout << ans << endl;
}

int main(int argc, const char * argv[]){
    input();

    solve();

    return 0;
}
