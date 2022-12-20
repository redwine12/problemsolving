#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    while(1){
        int num;
        string str;
        cin >> num;
        if(num == 0)
            return 0;
        str = to_string(num);
        string temp = str;
        reverse(str.begin(), str.end());
        if (temp == str)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    
    return 0;
}
