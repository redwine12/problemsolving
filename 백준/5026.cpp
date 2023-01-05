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
    for(int i=0; i<t; i++){
        string str;
        cin >> str;
        if(str == "P=NP")
            cout << "skipped" << "\n";
        else
        {
            int index;
            for(int j=0; j<str.size(); j++)
            {
                if(str[j] == '+'){
                    index = j;
                }
            }
            string a = str.substr(0,index);
            string b = str.substr(index+1);
            cout << stoi(a)+stoi(b) << "\n";
        }
    }
    return 0;
}
