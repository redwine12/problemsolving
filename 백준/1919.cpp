#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <cstring>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    string a, b;
    cin >> a >> b;
    int count = 0;
    
    for (int i=0; i<a.length(); i++) {
            //if (a[i] == 0) break;
            for (int j=0; j<b.length(); j++) {
                //if (b[j] == 0) break;
                if (a[i] == b[j]) {
                    a[i] = '0';
                    b[j] = '0'; }
            }
        }
    for (int i=0; i<a.length(); i++){
        if(a[i] == '0')
            count++;
    }
    for (int i=0; i<b.length(); i++){
        if(b[i] == '0')
            count++;
    }
    int ans = (a.length() + b.length()) - count;
    cout << ans << "\n";
    return 0;
}
