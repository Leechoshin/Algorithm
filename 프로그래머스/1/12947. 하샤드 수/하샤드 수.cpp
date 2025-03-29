#include <string>
#include <vector>
using namespace std;

bool solution(int x) {
    bool answer = true;
    int number = 0;
    int first_x = x;
    while(true){
        number += (x%10);
        x /= 10;
        if(x == 0){
            break;
        }
    }
    
    if(first_x % number == 0) { answer = true; }
    else answer = false;
    
    return answer;
}