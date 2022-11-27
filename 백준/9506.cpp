#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    while(1){
        vector<int> v;
        cin >> n;
        if(n == -1)
            return 0;
        for(int i=1; i<n; i++){
            if(n%i == 0)
                v.push_back(i); //벡터에 약수 넣음
        }
        int sum = 0;
        for(int i=0; i<v.size(); i++){
            sum+=v[i]; // 약수의 합
        }
        if(sum == n)
            {
                cout << n << " = ";
                for(int i=0; i<v.size(); i++){
                    cout << v[i];
                    if(i == v.size()-1)
                        break;
                    cout << " + ";
            }
        }
        else
            cout << n << " is NOT perfect.";
            
        cout << "\n";
    }
    
    return 0;
}
