#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int a,b,c =0;
  int count=0;
  for (a=1; a<=n; a++)
    for (b=1;b<=n; b++)
      for (c=1; c<=n; c++)
        if (a+b+c == n){
          if (c>= b+2 && a%2 == 0)
            count++;
        }

  cout << count;
  return 0;
}