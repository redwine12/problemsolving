#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string num;
    for(int i=0; i<3; i++){
        int max=0, count=0;
        cin >> num;
        for (int j=0; j<8; j++){
            if(num[j] == num[j+1])
                {
                    count++;
                    if(count > max)
                        max = count;
                }
            else
                count = 0;
        }
        cout << max+1 << "\n";
    }
    return 0;
}

