#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;


int n,m;
int arr[1000001];

void search(int a){
    int start = 0;
    int end = n-1;
    bool flag = false;
    
    while(end>=start){
        int mid = (start+end)/2;
        if(arr[mid] == a){
            flag = true; break;
        }
        else if(arr[mid] > a) end = mid - 1;
        else start = mid + 1;
    }
    if(flag) cout << "1" << endl;
    else cout << 0 << endl;
}


int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr, arr+n);
    
    cin >> m;
    for(int i=0; i<m; i++){
        int num;
        cin >> num;
        search(num);
    }
    
    return 0;
}
