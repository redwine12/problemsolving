#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#pragma warning(disable:4996)
#include <string>
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;


int n,m,k;
int board[1005][1005];

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n >> m >> k;
    
    if(k<n+m-1){
        cout << "NO" << endl;
        return 0;
    }
    
    int num;
    for(int i=1; i<=n; i++){
        num = i;
        for(int j=1; j<=m; j++){
            board[i][j] = num++;
        }
    }
    
    cout << "YES" << endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
