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

    int num, count = 0;
    char n;
    string str;
    cin >> num >> n;
    for(int i=1; i<= num; i++){
        str = to_string(i);
        for(int i=0; i<str.size(); i++){
            if(str[i] == n)
                count++;
        }
    }
    
    cout << count << endl;
    return 0;
}
