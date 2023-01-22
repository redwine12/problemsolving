#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

#define X first
#define Y second

int n,x,y;
vector<pair<int, int>> v;
int arr[51] = {0, };

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        v.push_back({x,y});
    }
    
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            
            if(v[i].X > v[j].X){
                if(v[i].Y > v[j].Y) arr[j]++;
                else continue;
            }
            
            else if(v[i].X < v[j].X){
                if(v[i].Y < v[j].Y) arr[i]++;
                else continue;
            }
           
            /* 문제 해석 오류 같을때는 포함 X
//            else{ // first 가 같을때
//                if(v[i].Y > v[j].Y) arr[j]++;
//                else if(v[i].Y < v[j].Y) arr[i]++;
//                else continue;
//            }
            */
        }
    }
    
    for(int i=0; i<n; i++) cout << arr[i]+1 << " ";
    cout << endl;
    return 0;
}
