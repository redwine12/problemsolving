#include <algorithm>
#include <iostream>
#include <math.h>
#include <sstream>
#include <vector>
#define endl '\n'

using namespace std;
typedef long long ll;

int a, ans = 0;
char c;
bool flag = false;

int main() {
  while (cin >> a >> c) {
    if (c == '-')
      flag = true;
    if (flag)
      ans -= a;
    else
      ans += a;
  }

  cout << ans << endl;
  return 0;
}

// solution #2
// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <sstream>
// #include <math.h>
// #define endl '\n'

// using namespace std;
// typedef long long ll;

// string str;
// string str2;
// int ans = 0; // 답
// bool flag = false;

// int main() {
//   cin >> str;
//   for(int i=0; i<str.size(); i++){
//     if(str[i] == '-' || str[i] == '+'){
//         if(flag){
//           ans -= stoi(str2);
//           str2 = "";
//         }

//         else{
//           ans += stoi(str2);
//           str2 = "";
//         }
//       }

//     else{
//       str2 += str[i];
//     }

//     if(str[i] == '-') flag = true;
//   }

//   cout << ans << endl;
// }