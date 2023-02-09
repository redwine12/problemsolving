#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--){
        int arr[1000][15];
        int floor, ho, sum = 0;
        cin >> floor >> ho;
        
        for(int i=0; i<=floor; i++){
            for(int j=1; j<= ho; j++){
                if(i==0)
                    arr[0][j] = j;
                else if(j==1)
                    arr[i][j] = 1;
                else
                    arr[i][j] = arr[i-1][j] + arr[i][j-1];
            }
        }
        cout << arr[floor][ho] << endl;
    }
    return 0;
}
