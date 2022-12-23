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
    vector<int> v;
    for(int i=1; i<=n; i++)
        v.push_back(i);

    while(v.size()!=1){
        int temp = v.front();
        v.erase(v.begin());
        cout << temp << " ";
        temp = v.front();
        v.erase(v.begin());
        v.push_back(temp);
    }

    cout << v[0] << endl;
    return 0;
}
