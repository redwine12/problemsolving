#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'
#include <deque>

using namespace std;
typedef long long ll;

deque<int> dq;
int n, m, num, pos;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n >> m;
    for(int i=1; i<=n; i++) dq.push_back(i);
    
    int count = 0;
    while(m--){
        cin >> num;
        for(int i=0; i<dq.size(); i++){
            if(dq[i] == num){
                pos = i; break;
            }
        }
            
            if(pos < dq.size()/2+1){
                while(1){
                    if(dq.front() == num){
                        dq.pop_front();
                        break;
                    }
                    dq.push_back(dq.front());
                    dq.pop_front();
                    count++;
                }
            }
            
            else{
                while(1){
                    if(dq.front() == num){
                        dq.pop_front();
                        break;
                    }
                    dq.push_front(dq.back());
                    dq.pop_back();
                    count++;
                }
            }
        }
    
    cout << count << endl;
    return 0;
}
