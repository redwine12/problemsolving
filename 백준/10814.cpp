#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>

using namespace std;


bool compare(pair<int, string> age, pair<int, string> name){
    return age.first < name.first;
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t, age;
    string name;
    cin >> t;
    vector<pair<int, string>> v;
    
    for(int i=0; i<t; i++){
        cin >> age >> name;
        v.push_back(make_pair(age, name));
    }
    
    stable_sort(v.begin(), v.end(), compare);
    
    for(int i=0; i<t; i++){
        cout << v[i].first << " " << v[i].second << '\n';
    }
    return 0;
}
