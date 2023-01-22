#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>

using namespace std;

char arr[5] = {'a', 'e', 'i', 'o' , 'u'};

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string str;
    while(1){
        int count=0, notarr=0, yesarr=0;
        cin >> str;
        if(str == "end")
            return 0;
        
        bool flag = true;
        for(int i=0; i<str.size(); i++){
            if(str[i] == str[i+1]){
                if(str[i] != 'e' && str[i] != 'o') flag = false;
            }
            bool check = false;
            for(int j=0; j<5; j++){
                if(str[i] == arr[j])
                {
                    count++;
                    check = true;
                }
            }
            if(check == false) {
                notarr++;
                yesarr = 0;
            }
            else {
                yesarr++;
                notarr=0;
            }
            if(yesarr==3 || notarr==3){
                flag = false;
                break;
            }
        }
        
        if(count == 0) flag = false;
        
        if (flag == true)
            cout << "<" << str << "> " << "is acceptable." << endl;
        else
            cout << "<" << str << "> " << "is not acceptable." << endl;
    }
}
