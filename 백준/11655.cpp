#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>

using namespace std;

string str;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    getline(cin, str);
    
    for(int i=0; i<str.size(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            int count = 13;
            while(count--){
                if(str[i] == 'Z') str[i] = 'A';
                else str[i] += 1;
            }
        }
        
        else if(str[i] >= 'a' && str[i] <= 'z'){
            int count = 13;
            while(count--){
                if(str[i] == 'z') str[i] = 'a';
                else str[i] += 1;
            }
        }
    }
    
    cout << str << endl;
    return 0;
}
