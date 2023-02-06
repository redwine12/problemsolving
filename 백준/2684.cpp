#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>

using namespace std;

string arr[8] = {"TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT", "HHH"};

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
            
    int t;
    cin >> t;
    while(t--){
        int count[8] = {0, };
        string str;
        cin >> str;
        for(int i=0; i<38; i++)
            for(int j=0; j<8; j++)
                if(str.substr(i,3) == arr[j])
                    count[j]++;
        
        for(int i=0; i<8; i++)
            cout << count[i] << " ";
        cout << "\n";
    }
    return 0;
}
