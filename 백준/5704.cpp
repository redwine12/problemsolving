#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string str;
    
    while(1){
        getline(cin, str);
        if (str[0] == '*')
            return 0;
        
        str.erase(remove(str.begin(), str.end(), ' '), str.end());
        int arr[26] = {0, };
        for(int i=0; i<str.size(); i++)
        {
            arr[int(str[i] - 'a')]++;
        }
        bool yes = true;
        for(int i=0; i<26; i++)
        {
            if (arr[i] == 0)
                yes = false;
        }
        if (yes == true)
            cout << "Y\n";
        else if(yes == false)
            cout << "N\n";
    }
}
