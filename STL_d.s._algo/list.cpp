#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>

#include <list> // header file

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    list<int> L; // define
    list<int>::iterator pos = l.end(); // list의 끝의위치를 변수(반복자로) 선언
    
    L.push_front(data);
    L.push_back(data);
    
    L.pop_front(); // 맨 앞 원소 삭제
    L.pop_back(); // 맨 뒤 원소 삭제
    
    < 원소 삭제 시 주의 사항 >
    erase 함수의 리턴값은 삭제 원소 다음에 있는 원소의 iterator이기 때문에
    iterator가 list.end 에 위치할때는 L.erase(--pos); 를 해줘야함
    아니면 if(pos != L.end()) L.erase(pos);
    

    return 0;
}
