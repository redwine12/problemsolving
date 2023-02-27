#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>

using namespace std;

int arr[5] = {0,8,4,2,1};

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int level;
    cin >> level;
    if(level >= 229){
        cout << "4" << endl; return 0;}
    
    while(1){
        if(level<=206){
            if(level == 206){
                cout << "2" << endl; break;}
            else{
                cout << "1" << endl; break;}
        }
        
        else if(level <= 218){
            if(level == 218){
                cout << "3" << endl; break;}
            else{
                cout << "2" << endl; break;}
        }
        
        else if(level <= 228){
            cout << "3" << endl; break;}
    }

    return 0;
}
