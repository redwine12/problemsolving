#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>

using namespace std;

int arr[201][201] = {0, };

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m,a,b;
    cin >> n >> m;
    while(m--){
        cin >> a >> b;
        arr[a][b]++;
        arr[b][a]++;
    }
    
    int count = 0;
    for(int i=1; i<=n-2; i++){
        for(int j=i+1; j<=n-1; j++){
            for(int k=j+1; k<=n; k++){
                if(arr[i][j] == 0 && arr[i][k] == 0 && arr[j][k] == 0)
                    count++;
            }
        }
    }
    
    cout << count << endl;
    return 0;
}
