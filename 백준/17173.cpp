#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <cstring>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    int m,n, num, sum=0; //(m < n)
    cin >> n >> m;
    
    vector<int> v(n+1,0);
    for(int i=1; i<=m; i++){
        cin >> num;
        for (int j=num; j<= n; j+=num){
            v[j] = 1;
        }
            //cout << i << "sum 은 " << sum << "\n\n";
        }
    
    for(int j=0; j<v.size()+1; j++){
        if (v[j] == 1)
            sum += j; }

    cout << sum << endl;
    return 0;
}

