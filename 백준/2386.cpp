#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    while(1)
    {
        string str;
        getline(cin, str);
        
        if(str[0] == '#')
            return 0;
        char check = str[0];
        
        int count = 0;
        for(int i=2; i<str.size(); i++){
            str[i] = tolower(str[i]);
            if (str[i] == check)
                count++;
        }
        
        cout << check << " " << count << "\n";
    }
}
