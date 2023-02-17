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


    int t, a, b, count = 0;
    cin >> t;
    int cow[11];
    for(int i=0; i<11; i++)
        cow[i] = -1;
    
    for(int i=0; i<t; i++){
        cin >> a >> b;
        if(cow[a] != -1 && cow[a] != b)
            {
                cow[a] = b;
                count++;
            }
        else
            cow[a] = b;
    }
    
    cout << count << endl;
    return 0;
}
