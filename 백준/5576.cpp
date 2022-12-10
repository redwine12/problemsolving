#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    vector<int> v1;
    vector<int> v2;
    int a, b = 0;
    for(int i=0; i<10; i++){
        int input;
        cin >> input;
        v1.push_back(input);
    }
    for(int i=0; i<10; i++){
        int input;
        cin >> input;
        v2.push_back(input);
    }
    
    sort(v1.begin(), v1.end(), greater<int>());
    sort(v2.begin(), v2.end(), greater<int>());
    cout << v1[0]+v1[1]+v1[2] << " ";
    cout << v2[0]+v2[1]+v2[2] << endl;
    
    return 0;
}
