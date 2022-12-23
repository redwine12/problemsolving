#include <iostream>
#include <vector>
using namespace std;
int x,y;
int main(int argc, const char * argv[]){
    // 벡터는 스택stack 개념이다.
    
    //선언
    vector<int> v; // or
    // vector<int> v(x,y);
    // 크기가 x이고, y로 채워진 벡터

    //값 넣기
    v.push_back(1);
    
    //마지막 원소 제거
    v.pop_back();
    
    //첫번째 와 마지막의 '다음'을 가리킴
    v.begin(), v.end();
    
    //벡터 모든 원소 제거, 단 메모리는 남아있음!!!
    v.clear();
    
    //특정 원소 제거
    v.remove(v.begin(), v.end(), 5);
    // 벡터 처음부터 끝까지 5가 있는 자리 지움
    // 벡터 크기도 줄어듬
    
    //특정 위치 제거
    v.erase(v.begin(), v.begin()+2);
    // 처음부터 2번째 전 인덱스 까지 지움 // [0]~[1]까지
    
    //중복 제거
    // 1 2 3 3 4 5 3 >>> 1 2 3 4 5 로 바뀜
    v.erase(unique(v.begin(), v.end()), v.end());
    
    //벡터 정렬
    sort(v.begin(), v.end()); // 오름차순 ( 0 ~ 100...)
    sort(v.rbegin(), v.rend()); // 내림차순 (100... ~ 0)
    
    // 인덱스 중간에 값 추가하기
    v.insert(v.begin()+???, num) // v.end() - ???도 가능
    // 맨처음을 기준으로 ???만큼 더한 인덱스에 num추가
    // v.begin()+1 을 하면 v[1]앞에 추가한다고 보면됨
    
    // 원소 중 최댓값, 최소=min_element
    int max = *max_element(v.begin(), v.end());
    int max_index = max_element(v.begin(), v.end()) - v.begin(); // [i] 인덱스 값 반환

    
    
}
