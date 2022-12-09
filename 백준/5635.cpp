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

    int n;
    vector<string> strv;
    int arr[101][3];
    
    cin >> n;
    for(int i=0; i<n; i++){
        string str;
        cin >> str;
        strv.push_back(str);
        cin >> arr[i][2] >> arr[i][1] >> arr[i][0];
    }
    

    int maxindex, max=2011, min =0, minindex;
    for(int i=0; i<n; i++){ // 가장 나이 많은 사람 찾기
        if(arr[i][0] < max){
            maxindex = i;
            max = arr[maxindex][0];
        }
        else if(arr[i][0] == max){
            if(arr[i][1]<arr[maxindex][1]){
                maxindex = i;
                max = arr[maxindex][0];
            }
            else if(arr[i][1]==arr[maxindex][1]){
                if(arr[i][2]<arr[maxindex][1]){
                    maxindex = i;
                    max = arr[maxindex][0];
                    }
                }
            }
        }
    
    for(int i=0; i<n; i++){ // 가장 나이 적은 사람 찾기
        if(arr[i][0] > min){
            minindex = i;
            min = arr[minindex][0];
        }
        else if(arr[i][0] == min){
            if(arr[i][1]>arr[minindex][1]){
                minindex = i;
                min = arr[minindex][0];
            }
            else if(arr[i][1]==arr[minindex][1]){
                if(arr[i][2]>arr[minindex][1]){
                    minindex = i;
                    min = arr[minindex][0];
                    }
                }
            }
        }
        cout << strv[minindex] << "\n" << strv[maxindex] << endl;
    }

