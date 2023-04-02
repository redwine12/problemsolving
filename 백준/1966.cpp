#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'
#include <queue>

using namespace std;
typedef long long ll;

#define X first
#define Y second

int t, n;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> t;
    int index, num;
    while(t--){
        
        priority_queue<int> pq;
        queue<pair<int, int>> q;
        
        cin >> n >> index;
        for(int i=0; i<n; i++){
            cin >> num;
            q.push({i, num});
            pq.push(num);
        }
        

        int count = 0;
        while(!q.empty()){
            int fir = q.front().X;
            int sec = q.front().Y;
            q.pop();
            
            if(pq.top() == sec){
                pq.pop();
                count++;
                
                if(fir == index){
                    cout << count << endl;
                    break;
                }

            }
            else q.push({fir, sec});
        }
    }
    return 0;
}
