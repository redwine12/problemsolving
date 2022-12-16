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

    int arr[201][3];
    int point[201] = {0, };
    int t, a, b, c;
    cin >> t;
    
    for (int i = 0; i < t; i++)
            for (int j = 0; j < 3; j++)
                cin >> arr[i][j];
    
    for(int j=0; j<3; j++)
        for(int i=0; i<t-1; i++){
            int temp = arr[i][j];
            for(int k=i+1; k<t; k++){
                if (arr[k][j] == temp){
                    arr[i][j] = 0;
                    arr[k][j] = 0;
                }
            }
        }
    
    
    for(int i=0; i<t; i++)
        for(int j=0; j<3; j++)
            point[i]+=arr[i][j];
    
    for(int i=0; i<t; i++)
        cout << point[i] << endl;

    
    return 0;
}
