#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string str;
        getline(cin, str);
        for(int i=0; i<str.size(); i++){
            if(str[i] == ' ')
            {
                for(int j=i-1; j>=0&&str[j] != ' '; j--)
                    cout << str[j];
                cout << " ";
            }
        }
        // last word
        for(int i=str.size()-1; i>=0&str[i] != ' '; i--)
            cout << str[i];
        cout << "\n";
    }
    return 0;
}
