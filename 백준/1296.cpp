#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;



int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int l=0,o=0,v=0,e=0;
    string name, ans;
    cin >> name;
    for (int i=0; i<name.size(); i++){
        if(name[i] == 'L') l++;
        else if (name[i] == 'O') o++;
        else if (name[i] == 'V') v++;
        else if (name[i] == 'E') e++;
    }
    
    int t; // 테스트케이스
    cin >> t;
    int sum = 0 , max = -1;
    for(int i=0; i<t; i++){
        int l2=0, o2=0, v2=0, e2=0;
        string str;
        cin >> str;
        for(int j=0; j<str.size(); j++)
        {
            if(str[j] == 'L') l2++;
            else if (str[j] == 'O') o2++;
            else if (str[j] == 'V') v2++;
            else if (str[j] == 'E') e2++;
        }
  
        sum =  ((l+l2+o+o2)*(l+l2+v+v2)*(l+l2+e+e2)*(o+o2+v+v2)*(o+o2+e+e2)*(v+v2+e+e2)) % 100;

        if(sum > max){
            max = sum;
            ans = str;
        }
        
        else if(sum == max)
            if(str<ans)
                ans = str;
    }
    
    cout << ans << endl;
    return 0;
}
