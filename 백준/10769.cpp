#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string str;
    cin.ignore();
    getline(cin, str);
    int happycount = 0, sadcount = 0;
    for(int i=0; i<str.size(); i++){
        if(str[i] ==':' && str[i+1] == '-'){
            if(str[i+2] == ')')
                happycount++;
            else if(str[i+2] == '(')
                sadcount++;
        }
    }
    
    if(happycount == 0 && sadcount == 0)
        cout << "none" << endl;
    else if (happycount > sadcount)
        cout << "happy" << endl;
    else if (happycount < sadcount)
        cout << "sad" << endl;
    else
        cout << "unsure" << endl;
    
    return 0;
}
