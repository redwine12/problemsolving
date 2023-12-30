#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'
#include <queue>

#define X first
#define Y second

using namespace std;
typedef long long ll;

int pos[16];
int n, ans = 0;

bool check(int k)
{
    for(int i=0; i<k; i++)
     	//col[i] = x��ǥ, i = y��ǥ, if (���̰��� ����) -> �밢���� ����
    	if(pos[i] == pos[k] || abs(pos[k] - pos[i]) == k - i) return false;
    return true;
}

void nqueen(int x)
{
    if(x == n) ans++;
    else
    {
        for(int i=0; i<n; i++)
        {
            pos[x] = i; // �� ��ġ 
            if(check(x)) nqueen(x+1);
        }
    }
}

int main(int argc, const char * argv[]){
    cin >> n;
    
    nqueen(0);
    cout << ans << endl;
    
    return 0;
}

