#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#pragma warning(disable:4996)
#include <string>
#include <sstream>
#include <math.h>
#include <deque>
#define endl '\n'
#define MAX

using namespace std;
typedef long long ll;

int n;
deque<pair<int, int>> dq;

int main(void)
{
    cin >> n;
    int num;
    for (int i = 0; i < n; i++){
        cin >> num;
        dq.push_back(make_pair(num,i+1));
    }
    
    while (!dq.empty()){
        int cur = dq.front().first;
        cout << dq.front().second << " ";
        dq.pop_front();
        
        if(cur>0){
            for(int i=0; i<cur-1; i++){
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        
        else{
            while(cur<0){
                dq.push_front(dq.back());
                dq.pop_back();
                cur++;
            }
        }
        
    }
    
    
}
