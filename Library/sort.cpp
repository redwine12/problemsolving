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

// Insertion sort
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Selection sort
void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        swap(arr[min_idx], arr[i]);
    }
}

// Merge sort
void merge(vector<int>& arr, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

// Quick sort
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Bucket sort
void bucketSort(vector<int>& arr) {
    int max_val = *max_element(arr.begin(), arr.end());
    int min_val = *min_element(arr.begin(), arr.end());
    int range = max_val - min_val + 1;

    vector<int> buckets(range, 0);

    for (int i = 0; i < arr.size(); i++)
        buckets[arr[i] - min_val]++;

    int index = 0;
    for (int i = 0; i < range; i++) {
        while (buckets[i] > 0) {
            arr[index++] = i + min_val;
            buckets[i]--;
        }
    }
}

// 함수 출력
void printArray(vector<int>& arr) {
    for (auto e : arr) cout << e << " ";
    cout << endl;
}

// 함수 초기화
void resetArray(vector<int>& arr){
    arr = {5,1,3,4,2};
}


int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);

    vector<int> arr = {5,1,3,4,2};

    cout << "Original array: ";
    printArray(arr);

    // Insertion sort
    insertionSort(arr);
    cout << "After Insertion sort: ";
    printArray(arr);
    resetArray(arr);

    // Selection sort
    selectionSort(arr);
    cout << "After Selection sort: ";
    printArray(arr);
    resetArray(arr);

    // Merge sort
    mergeSort(arr, 0, arr.size() - 1);
    cout << "After Merge sort: ";
    printArray(arr);
    resetArray(arr);

    // Quick sort
    quickSort(arr, 0, arr.size() - 1);
    cout << "After Quick sort: ";
    printArray(arr);
    resetArray(arr);

    // Bucket sort
    bucketSort(arr);
    cout << "After Bucket sort: ";
    printArray(arr);

    return 0;
}
