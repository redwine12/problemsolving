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
        int arr[101] = {0, };
        int room, count = 0;
        cin >> room;
        for(int i=1; i<=room; i++){
            int temp = i;
            for(int j=i; j<=room; j+=temp){
                arr[j]++;
            }
        }
        for(int i=1; i<=room; i++){
            if(arr[i]%2 != 0)
                count++;
        }
        cout << count << endl;
    }
    
    return 0;
}
