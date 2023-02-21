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

struct student {
    string str;
    int kor, eng, mat;
};

bool compare(student &a, student &b){
    if(a.kor == b.kor) {
            if(a.eng == b.eng) {
                if(a.mat == b.mat) {
                    return a.str < b.str;
                }
                else return a.mat > b.mat;
            }
            else return a.eng < b.eng;
        }
        else return a.kor > b.kor;
    }


int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    
    vector<student> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i].str >> v[i].kor >> v[i].eng >> v[i].mat;
    
    sort(v.begin(), v.end(), compare);
    
    for(int i=0; i<n; i++) cout << v[i].str << endl;
    
    return 0;
}
