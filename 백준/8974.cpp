#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    vector<int> v;
    int a, b, num = 1, sum=0;
    for(int i=0; i<1000; i++){
        for(int i=0; i<num; i++)
            v.push_back(num);
        num++;
    }
    
    cin >> a >> b;
    a-=1;
    b-=1;
    for(int i=a; i<=b; i++){
        sum += v[i];
    }
    
    cout << sum << endl;
    return 0;
}
