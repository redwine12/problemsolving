#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string str;
    cin >> str;
    int arr[26] = {0, };
    char alpha[26];
    for (int i = 0, a = 'A'; i < 26; i++)
          alpha[i] = a++;
    
    
    for(int i=0; i<str.size(); i++){
        str[i] = tolower(str[i]);
        arr[str[i] - 97]++;
    }
    
    int max = 0, index;
    for(int i=0; i<26; i++){
        if(arr[i]>max)
            {
                max = arr[i];
                index = i;
            }
    }
    int count = 0;
    for(int i=0; i<26; i++){
        if(arr[i] == max)
            count++;
    }
    
    if(count >=2)
        cout << "?" << endl;
    else
        cout << alpha[index] << endl;
    
    return 0;
}
