#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

string board[51];

string wb[8] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
};

string bw[8] = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
};

int wbcount(int x, int y){
    int count = 0;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(board[x+i][y+j] != wb[i][j]) count++;
        }
    }
    
    return count;
}

int bwcount(int x, int y){
    int count = 0;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(board[x+i][y+j] != bw[i][j]) count++;
        }
    }
    
    return count;
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    int x,y;
    cin >> x >> y;
    for(int i=0; i<x; i++) cin >> board[i];
    
    int ans = 999999;
    for(int i=0; i+8<=x; i++){
        for(int j=0; j+8<=y; j++){
            int mini = min(bwcount(i, j), wbcount(i, j));
            if(mini < ans) ans = mini;
        }
    }
    
    cout << ans << endl;
    return 0;
}
