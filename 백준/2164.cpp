
#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

int n;
queue<int> q;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    for(int i=1; i<=n; i++) q.push(i);
    
    int temp;
    while(q.size() > 1){
        q.pop(); 
        temp = q.front();
        q.pop();
        q.push(temp);
    }
    
    cout << q.front() << endl;
    return 0;
}
