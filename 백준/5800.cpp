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

    int t, stu, classcount = 0;
    cin >> t;
    while(t--){
        classcount++;
        cin >> stu;
        vector<int> v(stu);
        for(int i=0; i<stu; i++){
            cin >> v[i];
        }
        
        sort(v.rbegin(), v.rend());
        
        int max=v[0], min=v[0], gap=-1;
        for(int i=1; i<v.size(); i++){
            if(abs(v[i-1]-v[i])>gap)
                gap = abs(v[i-1]-v[i]);
            if(v[i]>max)
                max = v[i];
            if(v[i]<min)
                min = v[i];
        }
        cout << "Class " << classcount << endl;
        cout << "Max " << max << ", " << "Min " << min << ", " << "Largest gap " << gap << endl;
    }
    
    return 0;
}
