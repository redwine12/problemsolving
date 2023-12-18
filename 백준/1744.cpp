#include <algorithm>
#include <iostream>
#include <math.h>
#include <sstream>
#include <vector>
#define endl '\n'

using namespace std;
typedef long long ll;

vector<int> vp, vm;
int n, num, ans(0);

void solve(vector<int> v){

  while(v.size() > 1){
    ans += *(v.end()-1) * *(v.end()-2);
    v.pop_back(); v.pop_back();
  }

  if(v.size() == 1) ans += *(v.end()-1);
  
}

int main() {
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> num;
    if(num==1) ans++;
    else if(num>1) vp.push_back(num);
    else vm.push_back(num);
  }

  sort(vp.begin(), vp.end());
  sort(vm.begin(), vm.end(), greater<>());

  solve(vp);
  solve(vm);

  cout << ans << endl;
  return 0;
}
