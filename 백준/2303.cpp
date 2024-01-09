#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#pragma warning(disable:4996)
#include <string>
#include <sstream>
#include <math.h>
#define endl '\n'
#define MAX

using namespace std;
typedef long long ll;

int n;
int arr[1006][6];
int score[1001] = {0, };
int ans=0, idx(0);

void input(){
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<5; j++){
        	cin >> arr[i][j];
		}
    }
}

void solve() {
	
    for(int i=0; i<n; i++){
    	for(int j=0; j<5; j++){
    		for(int k=j+1; k<5; k++){
        		for(int l=k+1; l<5; l++)
        			score[i] = max(score[i], (arr[i][j]+arr[i][k]+arr[i][l])%10);
			}
		}
		ans = max(ans, score[i]);
	}
        
				
}

int main(int argc, const char * argv[]){
    input();
    
    solve();

    for(int i=0; i<n; i++){
    	if(score[i] == ans) idx = i;
	}
	
	cout << idx+1 << endl;
	
	return 0;
}
