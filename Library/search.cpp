#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#pragma warning(disable:4996)
#include <string>
#include <sstream>
#include <math.h>
#define endl '\n'
#define MAX

using namespace std;
typedef long long ll;


// Sequential Search (���� �˻�)
int sequentialSearch(vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target)
            return i; // ã�� ��� �ش� �ε��� ��ȯ
    }
    return -1; // ã�� ���� ��� -1 ��ȯ
}

// Binary Search (���� �˻�)
int binarySearch(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid; // ã�� ��� �ش� �ε��� ��ȯ
        else if (arr[mid] < target)
            left = mid + 1; // �߰������� ū �������� �˻�
        else
            right = mid - 1; // �߰������� ���� �������� �˻�
    }
    return -1; // ã�� ���� ��� -1 ��ȯ
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);

    vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int target = 11;
    int idx;

     // Sequential Search
    idx = sequentialSearch(arr, target);
    if (idx != -1)
        cout << "Sequential Search: " << idx << "��° �ε������� �߰�" << endl;
    else
        cout << "Sequential Search: Ž������" << endl;

    // Binary Search
    idx = binarySearch(arr, target);
    if (idx != -1)
        cout << "Binary Search: " << idx << "��° �ε������� �߰�" << endl;
    else
        cout << "Binary Search: Ž������" << endl;

    return 0;
}
