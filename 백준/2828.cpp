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
    
    int screen, bag, t, apple, start =1, count=0;
    cin >> screen >> bag >> t;
    int end = start+bag-1;
    while(t--){
        cin >> apple;
        
        while(1){
            if(apple>=start && apple<=end)
                break;
            
            else if(start > apple){
                start--; end--; count++;}
            else{
                start++; end++; count++;}
        }
    }
    cout << count << endl;
}
