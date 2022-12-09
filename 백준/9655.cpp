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

    int n;
    cin >> n;
    bool flag = true;
    while(n!=0){
        if(n>3)
            n-=3;
        else
            n-=1;

        flag = !flag;
    }
    
    if(flag == true)
        cout << "CY" << endl;
    else
        cout << "SK" << endl;
    
    return 0;
}
