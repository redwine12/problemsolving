#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t, snake, h;
    cin >> t >> snake;
    vector<int> fruit;
    for(int i=0; i<t; i++){
        cin >> h;
        fruit.push_back(h);
    }
    
    sort(fruit.begin(), fruit.end());
    for(int i=0; i<fruit.size(); i++){
        if(snake >= fruit[i]){
            snake++;
        }
    }
    
    cout << snake << endl;
    return 0;
}
