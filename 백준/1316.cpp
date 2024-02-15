#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    string str;
    string newstr;
    int count =0;
    
    cin >> t;
    while(t--){
        bool flag = true;
        cin >> str;
        for(int i=0; i<str.size(); i++){
            if(str[i]!=str[i+1]){
                for(int j=i+1; j<str.size(); j++){
                    if(str[i] == str[j]){
                        flag = false;
                    }
                }
            }
        }
        if(flag)
            count++;
    }
    
    cout << count << endl;
    return 0;
}
