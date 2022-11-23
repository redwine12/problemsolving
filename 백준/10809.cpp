#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string str;
    cin >> str;
    int arr[26];
    for(int i=0; i<26; i++){
        arr[i] = -1;
    }
    
    for(int i=0; i<str.size(); i++){
        if(arr[str[i] - 97] != -1)
            continue;
        else
            arr[str[i] - 97] = i;
    }
    
    for(int i=0; i<26; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}
