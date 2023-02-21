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

    int count=0, arr[10] = {0, };
    string n;
    cin >> n;
    for(int i=0; i<n.size(); i++){
        arr[n[i]-'0']++;
    }
    
    if(arr[6]>=2 || arr[9]>=2){
        int temp = (arr[6]+arr[9])/2 + (arr[6]+arr[9])%2;
        arr[6] = temp;
        arr[9] = temp;
    }
    
    int max=0;
    for(int i=0; i<=9; i++){
        if(arr[i]>max)
            max=arr[i];
    }
    
    count += max;
    cout << count << endl;
    return 0;
}
