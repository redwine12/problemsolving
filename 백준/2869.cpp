#include <iostream>

using namespace std;

// 시간제한 0.15 sec

int main(int argc, const char * argv[]){
    int tree, up, down;
    cin >> up >> down >> tree;
    
    cout << (tree-down-1)/(up-down)+1 << endl;
}
