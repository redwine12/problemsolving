#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

int t, h, w ,n;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> t;
    while(t--){
        cin >> h >> w >> n;
        for(int i=1; i<=w; i++){
            for(int j=1; j<=h; j++){
                n--;
                if(n == 0){
                    int floor = j*100;
                    int door = i;
                    cout << floor + door << endl;
                    break;
                }
            }
        }      
    }
    
    return 0;
}
