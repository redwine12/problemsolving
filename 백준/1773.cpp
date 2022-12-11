#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, time;
    cin >> n >> time;
    
    int arr[2000001] = {0, };
    int delay;
    for(int i=0; i<n; i++){
        cin >> delay;
        int temp = delay;
        while(delay<=time)
        {
            arr[delay]++;
            delay += temp;
        }
    }
    
    int count = 0;
    for (int i=0; i<=time; i++){
        if(arr[i]>0)
            count++;
    }
    cout << count << "\n";
    return 0;
}
