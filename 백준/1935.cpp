#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <stack>

using namespace std;

int arr[27], n;
double num1, num2,temp;
vector<double> v;
string str;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n;
    cin >> str;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    for(int i=0; i<str.size(); i++){
        if(str[i] == '*' || str[i] == '+' || str[i] == '/' || str[i] == '-')
        {
            num2 = v.back();
            v.pop_back();
            num1 = v.back();
            v.pop_back();
            if(str[i] == '*')
                v.push_back(num1*num2);
            else if(str[i] == '+')
                v.push_back(num1+num2);
            else if(str[i] == '/')
                v.push_back(num1/num2);
            else if(str[i] == '-')
                v.push_back(num1-num2);
        }
            else v.push_back(arr[str[i] - 'A']);
    }
    
    cout << fixed;
    cout.precision(2);
    cout << v.back() << endl;
    return 0;
}
