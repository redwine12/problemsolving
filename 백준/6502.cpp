#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int count = 1;
    while(1){
        double table, x, y;
        cin >> table; // 식탁의 반지름
        if(table == 0) break;

        cin >> x >> y;
        
        if(table >= sqrt(y/2*y/2 + x/2*x/2) )
            cout << "Pizza "<< count << " fits on the table.\n";
        else
            cout << "Pizza "<< count << " does not fit on the table.\n";
        
        count++;
    }
}
