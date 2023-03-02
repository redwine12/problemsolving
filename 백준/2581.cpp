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

    int m,n,sum = 0, min = 10001;;
    vector<int> v;
    cin >> m >> n;
    for(int i=m; i<=n; i++){
        int count = 0;
        for(int j=1; j<=i; j++)
        {
            if(i%j == 0)
                count++;
        }
        if(count==2)
            v.push_back(i);
    }
    if(v.size()==0)
        cout << -1 << endl;
    else{
        for(int i=0; i<v.size(); i++){
            sum+=v[i];
            if(v[i]<min)
                min = v[i];
        }
        cout << sum << endl << min << endl;
    }
    return 0;
}
