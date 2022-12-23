#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]){
    
    //선언
    string str;
    
    //공백 포함 입력받기
    getline(cin, s);
    // getline 전에 cin을 사용할 경우 cin.ignore() 해줘야됨
    cin.ignore(); // cin을 사용하고 ignore 해줘야됨
    // 이유 : cin은 '\n'를 처리하지 않고 입력버퍼에 남겨두고\
    // 다음 getline으로 입력받는 곳으로 \n가 이동한다.
    // getline은 '\n'을 처리함
    
    // 알파벳순 정렬
    sort(str.begin(), str.end()); // (A~Z)
    sort(str.begin(), str.end(), greater<>()); // (Z~A)
    
    //문자열 전체 공백 제거
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    
    //대문자, 소문자 변환
    str[i] = tolower(str[i]) // 대문자 >>> 소문자
    str[i] = toupper(str[i]) // 소문자 >>> 대문자
    
    //문자열 특정위치에 문자 추가
    str.insert(2,"hello"); // str[2]자리부터 hello를 삽입
    
    //문자열 특정위치에 문자 제거
    str.erase(1,3); // str[1]~str[3]까지의 단어 지움
    str.erase(1); // str[1]에 있는 단어 지움
    
    //정수를 문자열에 넣을때
    //to_string 사용
    str += to_string(1); // 1을 문자열 뒤에 추가
    int index = str.find(to_string(1));
    // 추가한 1의 위치를 반환 [i]번 인지
    
    
    //문자열 특정위치 자르기
    str.substr(2); // 2번 인덱스 부터 끝까지
    str.substr(2,5) // 2번 인덱스부터 5개 원소
    
    
    // 문자열 자르기 (공백, 특정 문자 기준으로)
    // ( 백터에 저장 하는 방법 )
    string str;
    getline(str); // 문자열 입력
    istringstream ss(str);
    
    while(getline(ss, str, ' ')) // ,를 기준으로 자르고싶으면 ',' 해주면됨
        v.push_back(str); // 공백기준으로 단어를 벡터에 넣음
    
    
    // 문자열 사전순서로 출력
    string a,b;
    만약 a가 "abc"이고 b가 "abb"이면
    a>b로 나타낼수 있음.
    
    // 문자열에서 찾기
    if(str.find("a") == string::npos)
        cout << "a가 문자열에 없습니다"
        
    //특정 문자 찾아서 없애거나 바꾸기 (치환하기)
    str.replace("바꿀 시작위치", "치환할 길이", "치환할 문자열")
    //예시
    str.replace(str.find("hello"), 5, "#");
    
    //정수형 문자열에서 하나의 숫자를 정수로 바꾸고싶을때
    // char to int
    string str = "12345"
    int temp = str[0] - '0'; //'1'을 정수 1로 변환하여 temp에 넣음
}
