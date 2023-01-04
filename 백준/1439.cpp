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

    int count = 0;
    string str;
    cin >> str;

    for(int i=0; i<str.size(); i++){
        if(str[i] != str[i+1]){
            count++;
        }
    }

    cout << count/2 << endl;
    return 0;
}
