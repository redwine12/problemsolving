#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int ans = 0;
    vector<int> v;
    for(int i=0; i<5; i++){
        int input;
        cin >> input;
        v.push_back(input);
    }
    int num = *min_element(v.begin(), v.end());
    while(ans == 0){
        int count = 0;
        for(int i=0; i<5; i++)
        {
            if(num%v[i] == 0)
                count++;
        }
        
        if(count>=3)
            ans = num;
        else
            num++;
    }
    
    cout << ans << endl;
    return 0;
}
