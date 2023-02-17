#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int x,y;
    cin >> x >> y;
    
    int daysum = 0;
    for(int i=0; i<x; i++){
        daysum+= arr[i];
    }
    
    daysum -= arr[x-1]-y;
    
    if(daysum%7 == 1)
        cout << "MON" << endl;
    else if(daysum%7 == 2)
        cout << "TUE" << endl;
    else if(daysum%7 == 3)
        cout << "WED" << endl;
    else if(daysum%7 == 4)
        cout << "THU" << endl;
    else if(daysum%7 == 5)
        cout << "FRI" << endl;
    else if(daysum%7 == 6)
        cout << "SAT" << endl;
    else
        cout << "SUN" << endl;
    
    return 0;
}
