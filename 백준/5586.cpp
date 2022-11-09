#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <cstring>
#define rep(i,n) for(int i=0; i<n; i++)

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    string a;
    int count1 = 0, count2=0;
    cin >> a;
    
    rep(i,a.length()){
        if (a[i] == 'J' && a[i+1] =='O' && a[i+2] == 'I')
            count1++;
        if (a[i] == 'I' && a[i+1] =='O' && a[i+2] == 'I')
            count2++;
    }
    
    cout << count1 <<"\n" << count2 << "\n";
    return 0;
}
