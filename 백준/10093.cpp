#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    long long a,b;
    cin >> a >> b;
    if(a>b)
        swap(a, b);
    vector<long long> v;
    for(long long i=a+1; i<b; i++){
        v.push_back(i);
    }
    
    cout << v.size() << "\n";
    for(long long i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    
    cout << endl;
    return 0;
}
