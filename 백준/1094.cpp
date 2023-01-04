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

    int arr[7] = {64, 32, 16, 8, 4, 2 ,1};
    int x, count = 0;
    cin >> x;
    for(int i=0; i<7; i++){
        if(x>=arr[i]){
            x-=arr[i];
            count++;
        }
        
        if(x==0){
            cout << count << endl;
            return 0;
        }
    }
    return 0;
}
