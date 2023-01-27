#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#include <queue>

using namespace std;

queue<int> q;
int n, k, temp, out;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n >> k;
    for(int i=1; i<=n; i++)
        q.push(i);
    
    cout << "<";
    
    while(q.size()>1){
        for(int i=0; i<k-1; i++){
            temp = q.front();
            q.push(temp);
            q.pop();
        }
        out = q.front();
        q.pop();
        
        cout << out << ", ";
    }
    
    cout << q.front() << ">" << endl;
    return 0;
}
