#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t, x, y;
    cin >> t;
    while(t--){
        int arr[100][100];
        int count = 0;
        
        cin >> x >> y;
        for(int i=0; i<x; i++)
            for(int j=0; j<y; j++)
                cin >> arr[i][j];
        
        for(int i=x-2; i>=0; i--){
            for(int j=0; j<y; j++){
                if(arr[i][j]==1 && arr[i+1][j] == 0)
                {
                    for(int k=i; k<x-1; k++)
                    {
                        if(arr[k][j]==1 && arr[k+1][j] == 0)
                        {
                            arr[k][j] = 0;
                            arr[k+1][j] = 1;
                            count++;
                        }
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
