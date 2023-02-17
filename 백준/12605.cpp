#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>
#include <sstream>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t, casenum = 1;
    cin >> t;
    cin.ignore();
    string str;
    vector<string> v;
    while(t--){
        v.clear();
        string buffer;
        getline(cin, str);
        istringstream cut(str);
        while(getline(cut, str, ' '))
            v.push_back(str);
        
        cout << "Case #" << casenum << ": ";
        for(int i=v.size()-1; i>=0; i--)
            cout << v[i] << " ";
        
        cout << "\n";
        casenum++;
    }
    
    return 0;
}
