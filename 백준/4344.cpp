#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t, n;
    cin >> t;
    while(t--){
        vector<int> v;
        int score, over = 0;
        double avg =0;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> score;
            v.push_back(score);
            avg += score;
        }
        avg /= n;
        for(int i=0; i<n; i++){
            if(v[i]>avg)
                over++;
        }
        
        cout << fixed;
        cout.precision(3);
        cout << (double)over*100/(double)n << "%" << endl;
    }
    
    return 0;
}
