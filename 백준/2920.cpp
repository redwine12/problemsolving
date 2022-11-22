#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, acount=0, dcount=0;
    vector<int> v;
    for(int i=0; i<8; i++){
        cin >> n;
        v.push_back(n);
    }
    
    for(int i=0; i<7; i++){
        if(v[i] == v[i+1]-1)
            acount++;
        if(v[i] == v[i+1]+1)
            dcount++;
    }
    
    if(acount == 7)
        cout << "ascending" << endl;
    else if(dcount == 7)
        cout << "descending" << endl;
    else
        cout << "mixed" << endl;
    
    return 0;
}
