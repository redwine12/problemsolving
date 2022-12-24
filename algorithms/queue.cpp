#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>

#include <queue> // 큐 = FIFO 구조

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    queue<int> q; // define
    
    q.push(data); // data 삽입
    
    q.front(); // 가장 앞의 데이터 ( 큐의 데이터들 중 먼저들어온 데이터 )
    q.back(); // 가장 마지막의 데이터 ( 큐 데이터들 중 가장 늦게 들어온 데이터 )
    
    q.pop(); // front 데이터 삭제
    
    q.size();
    
    q.empty();
    return 0;
}
