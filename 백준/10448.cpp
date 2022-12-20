#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

vector<int> v;

bool issumtrue(int num){
    for(int i=0; i<v.size(); i++)
        for(int j=0; j<v.size(); j++)
            for(int k=0; k<v.size(); k++)
                if (v[i]+v[j]+v[k] == num)
                    return true;
    return false;
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    int n = 1;
    while((n*(n+1))/2 <= 1000){
        v.push_back((n*(n+1))/2);
        n++;
    }
    
    cin >> t;
    int num;
    while(t--){
        cin >> num;
        
        if(issumtrue(num) == true)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
