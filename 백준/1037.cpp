#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, input;
    cin >> n;
    
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> input;
        v.push_back(input);
    }
    int max = *max_element(v.begin(), v.end());
    int min = *min_element(v.begin(), v.end());
    
    cout << max*min << endl;
    
    return 0;
}
