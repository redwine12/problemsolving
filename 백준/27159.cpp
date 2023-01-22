#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

int n;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    bool flag = false;
    int temp, input;
    cin >> temp;
    
    int count = 0;
    count += temp;
    for(int i=0; i<n-1; i++){
        cin >> input;
        if(input > temp+1){
            count += input;
            flag = false;
        }
        
        else if(input == temp+1 && flag == false){
            flag = true;
        }
        
        temp = input;
    }

    cout << count << endl;
    return 0;
}

    
// 이전풀이 - x
//    bool flag = false;
//    int count = 0;
//
//    for(int i=0; i<v.size()-1; i++){
//
//        if(v[i] + 1 != v[i+1]){
//            if(i == v.size()-2) count += v[i+1];
//            if(flag == true){
//                flag = false;
//                continue;
//            }
//            else if(flag == false){
//                count += v[i];
//            }
//        }
//
//        else if(v[i] + 1 == v[i+1]){
//            if(flag == false){
//                count+=v[i];
//                flag = true;
//            }
//            else continue;
//        }
//    }
