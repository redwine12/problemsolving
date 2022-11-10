#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    string n1, n2;
    cin >> t;
    for(int i=0; i<t; i++){
        int count = 0;
        cin >> n1 >> n2;
        for (int j=0; j<n1.length(); j++){
            if (n1[j] != n2[j])
                count++;
        }
        cout << "Hamming distance is " << count << ".\n";
    }
    
    return 0;
}

