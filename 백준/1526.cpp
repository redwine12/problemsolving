#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int num;
    cin >> num;
    
    for(int i=num; i>=4; i--){
        bool flag = true;
        int temp = i;
        while(temp > 0){
            if(temp%10 != 4 && temp%10 != 7)
            {
                flag = false;
                break;
            }
            
            temp /= 10;
        }
        
        if(flag == true)
            {
                cout << i << endl;
                return 0;
            }
    }
}
