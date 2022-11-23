#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        
        int r,c,zr,zc;
        cin >> r >> c >> zr >> zc;
        char arr[51][51];
        for(int i=0; i<r; i++)
            cin >> arr[i];
            
        for(int i=0; i<r; i++){
            for(int j=0; j<zr; j++){
                for(int k=0; k<c; k++){
                    for(int l=0; l<zc; l++)
                        cout << arr[i][k];
                }
                cout << "\n";
            }
        }
    }

