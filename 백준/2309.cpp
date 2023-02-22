#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    vector<int> v;
    int input, sum = 0;
    for(int i=0; i<9; i++){
        cin >> input;
        v.push_back(input);
        sum += input;
    }
    
    int temp;
    for(int i=0; i<v.size()-1; i++){
        for(int j=i+1; j<v.size(); j++){
            temp = v[i]+v[j];
            if(sum - temp == 100)
            {
                v.erase(v.begin()+i);
                v.erase(v.begin()+j-1);
                break;
            }
        }
        if(v.size() == 7)
            break;
    }
    
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++)
        cout << v[i] << "\n";
    
    return 0;
}
