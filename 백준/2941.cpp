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

    string str;
    cin >> str;
    string arr[8]={"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    
    for(int i=0; i<8; i++){
        while(1)
        {
            if(str.find(arr[i])==string::npos)
                break;

            str.replace(str.find(arr[i]), arr[i].size(), "@");
        }
    }
    
    cout << str.size() << endl;
    return 0;
}
