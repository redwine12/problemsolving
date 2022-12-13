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
    
    string str, str2;
    while(1)
    {
        cin >> str;
        if(str == "#")
            break;
        bool flag = true;
        while(1){
            int count=0;
            cin >> str2;
            if(str2 == "#")
                break;
            
            if(str.size() != str2.size())
                flag = false;
            else{
                for(int i=0; i<str.size(); i++)
                    if(str[i] != str2[i])
                        count++;
                if(count != 1)
                    flag = false;
            }
            str = str2;
        }
        
        if(flag == true)
            cout << "Correct" << endl;
        else
            cout << "Incorrect" << endl;
    }
    return 0;
}
