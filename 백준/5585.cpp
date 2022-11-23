#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int price, change, count = 0;
    cin >> price;
    change = 1000 - price;

    while(change>0)
    {
        if(change>=500){
            while(change>=500){
                change -= 500;
                count ++;
            }
        }
        
        else if(change>=100){
            while(change>=100){
                change -= 100;
                count ++;
            }
        }
        else if(change>=50){
            while(change>=50){
                change -= 50;
                count ++;
            }
        }
        else if(change>=10){
            while(change>=10){
                change -= 10;
                count ++;
            }
        }
        else if(change>=5){
            while(change>=5){
                change -= 5;
                count ++;
            }
        }
        
        else if(change>=1){
            while(change>=1){
                change -= 1;
                count ++;
            }
        }
    }
    
    cout << count << endl;
    
    return 0;
}
