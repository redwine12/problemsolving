#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    while(1){
        string str;
        getline(cin, str);
        int count = 0;
        int arr[26] = {0, };
        if (str[0] == '#')
            return 0;
        for(int i=0; i<str.size(); i++){
            str[i] = tolower(str[i]);
            arr[str[i] - 'a']++;
        }
        
        for(int i=0; i<26; i++){
            if (arr[i] > 0)
                count++;
        }
        cout << count << "\n";
    }
    
    return 0;
}
