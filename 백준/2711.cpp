#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t, index;
    string str;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> index >> str;
        str.erase(str.begin()+(index-1));
        cout << str << "\n";
    }
    return 0;
}
