#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>

using namespace std;

int arr[100][100] = {0, };

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, count = 0;
    cin >> n;
    
    while(n--){
        int x,y;
        cin >> x >> y;
        for(int i=x; i<x+10; i++){
            for(int j=y; j<y+10; j++){
                if(arr[i][j] == 1)
                    continue;
                arr[i][j]++;
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
