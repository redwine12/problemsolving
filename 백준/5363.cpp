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
    
    while(t--)
    {
        int count =0, index=0;
        string str;
        getline(cin, str);
        int len = str.size();
        for (int i=0; i<len; i++)
        {
            if(str[i] == ' ')
                count++;
            if(count == 2){
                index = i+1;
                break;
            }
        }
        for (int i=index; i<len; i++){
            cout << str[i];
        }
        cout << ' ';
        for (int i=0; i<index-1; i++)
            cout << str[i];
        cout << "\n";
    }
    return 0;
}
