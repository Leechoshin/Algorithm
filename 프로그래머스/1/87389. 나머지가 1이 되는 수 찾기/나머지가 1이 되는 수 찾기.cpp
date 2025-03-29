#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int divide = 1;
    while(true){
        if(n % divide == 1){
            break;
        }
        divide++;
    }
    
    answer = divide;
    return answer;
}