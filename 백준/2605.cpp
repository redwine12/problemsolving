#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, num, stud = 0;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        stud++;
        cin >> num;
        if(num == 0)
            v.push_back(stud);
        else
            v.insert(v.end()-num, stud);
    }
    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }
    cout << "\n";
    
    return 0;
}
