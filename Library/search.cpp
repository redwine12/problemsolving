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


// Sequential Search (선형 검색)
int sequentialSearch(vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target)
            return i; // 찾은 경우 해당 인덱스 반환
    }
    return -1; // 찾지 못한 경우 -1 반환
}

// Binary Search (이진 검색)
int binarySearch(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid; // 찾은 경우 해당 인덱스 반환
        else if (arr[mid] < target)
            left = mid + 1; // 중간값보다 큰 범위에서 검색
        else
            right = mid - 1; // 중간값보다 작은 범위에서 검색
    }
    return -1; // 찾지 못한 경우 -1 반환
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
        cout << "Sequential Search: " << idx << "번째 인덱스에서 발견" << endl;
    else
        cout << "Sequential Search: 탐색실패" << endl;

    // Binary Search
    idx = binarySearch(arr, target);
    if (idx != -1)
        cout << "Binary Search: " << idx << "번째 인덱스에서 발견" << endl;
    else
        cout << "Binary Search: 탐색실패" << endl;

    return 0;
}
