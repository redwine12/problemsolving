#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
#pragma warning(disable : 4996)
#include <cmath>
#include <queue>
#include <sstream>
#include <string>
#define endl '\n'
#define MAX 27

using namespace std;
typedef long long ll;

int n;
vector<pair<char, char>> v(MAX);
char cur = 'A';

// 전위
void order1(char cur){
    if(cur == '.') return;
    
    cout << cur;
    order1(v[cur-'A'].first);
    order1(v[cur-'A'].second);
}

// 중위
void order2(char cur){
    if(cur == '.') return;

    order2(v[cur-'A'].first);
    cout << cur;
    order2(v[cur-'A'].second);
}

// 후위
void order3(char cur){
    if(cur == '.') return;

    order3(v[cur-'A'].first);
    order3(v[cur-'A'].second);
    cout << cur;
}

void input() {
  char left, right, node;
  cin >> n;
  for(int i=0; i<n; i++){
      cin >> node >> left >> right;
      v[node - 'A'].first = left;
      v[node - 'A'].second = right;
  }
}

void solve() {
  order1(cur);
  cout << endl;

  order2(cur);
  cout << endl;

  order3(cur);
  cout << endl;
}

int main(int argc, const char *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(nullptr);

  input(); 
  solve();

  return 0;
}
