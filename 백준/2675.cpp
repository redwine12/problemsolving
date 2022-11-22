#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string str;
    int t;
    cin >> t;
    
    int num;
    for(int i=0; i<t; i++){
        cin >> num >> str;
        for(int j=0; j<str.size(); j++){
            for(int k=0; k<num; k++)
            {
                cout << str[j];
            }
        }
        cout << endl;
    }
    
    return 0;
}
