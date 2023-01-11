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

    int a, b, n, input;
    vector<int> v;
    cin >> a >> b >> n;
    while(n--){
        cin >> input;
        v.push_back(input);
    }
    
    int min= abs(a-b);
    for(int i=0; i<v.size(); i++){
        if(abs(v[i] - b) < min )
            min = abs(v[i] - b)+1;
    }
    
    cout << min << endl;
    return 0;
}
