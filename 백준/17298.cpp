#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#pragma warning(disable:4996)
#include <string>
#include <sstream>
#include <math.h>
#define endl '\n'
#include <stack>

using namespace std;
typedef long long ll;

int n, num;
int NGE[1000001];

vector<int> v;
stack<int> st;


int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> num;
        v.push_back(num);
    }
    
    for(int i=0; i<n; i++){
        while(!st.empty()){
            if(v[st.top()] < v[i]){
                NGE[st.top()] = v[i];
                st.pop();
            }
            else break;
        }
        st.push(i);
    }
    
    while(!st.empty()){
        NGE[st.top()] = -1;
//        cout << st.top();
        st.pop();
    }
    
    for(int i=0; i<n; i++) cout << NGE[i] << " ";
    cout << endl;
    return 0;
}
