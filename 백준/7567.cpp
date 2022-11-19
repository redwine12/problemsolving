#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string str;
    cin >> str;
    
    int count = 10;
    for (int i=0; i<str.length()-1; i++)
    {
        if (str[i] == str[i+1])
            count += 5;
        else
            count += 10;
    }
    
    cout << count << "\n";
    
    return 0;
}
