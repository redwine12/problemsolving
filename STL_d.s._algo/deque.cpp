#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>

#include <deque> // header file

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    deque<int> dq; // define
    
    dq.push_front(i); // i를 덱의 맨 앞에 추가
    dq.push_back(i); // i를 덱의 맨 뒤에 추가
    
    dq.pop_front(); // 덱의 맨 앞 원소 삭제
    dq.pop_back(); // 덱의 맨 뒤 원소 삭제
    
    dq.front(); dq.back();
    
    dq.empty();
    dq.size();
    dq.clear(); // dq 모든 원소 삭제
    
    // example
    dq.push_front(1); // 1
    dq.push_back(2);  // 1 2
    dq.push_front(3); // 3 1 2
    
    dq.insert(dq.begin()+1, 5); // 3 5 1 2
    
    return 0;
}
