#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int divide =1;
    while(divide <= n){
        if(n % divide == 0){
            answer += divide;
        }
        divide++;
    }
    return answer;
}