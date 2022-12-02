#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[10001] = {0, };
    int n, index;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> index;
        arr[index]++;
    }

    for (int i = 1; i < 10001; i++){
        for (int j = 0; j < arr[i]; j++)
            cout << i << "\n";
    }
    return 0;
}
