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
    
    // 교차점 문제
    // nC4 구현
    
    int n;
    cin >> n;
    cout << n*(n-1)*(n-2)*(n-3)/24 << endl;
    
    return 0;
}
