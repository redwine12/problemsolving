#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <string>
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

bool solve(int n) {
  if (n == 1) return false;
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) return false;
  }
  return true;
}

int main(int argc, const char * argv[]){
  int n;
  cin >> n;

  if (!solve(n)) {
    cout << n << endl;
  }
  
  else {
    while (solve(n) == true) {
      n++;
      if (n > pow(10, 9)-1) break;
    }
    cout << n << endl;
  }

  return 0;
}
