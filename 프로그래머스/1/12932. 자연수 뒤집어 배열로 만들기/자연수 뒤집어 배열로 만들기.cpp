#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
  
    // %를 사용하여 나머지를 구하고 그것을 바로 벡터에 삽입 (시간 단축) *구글링
    while(true){
        answer.push_back(n%10);
        n /= 10; // 12345 / 10 = 1234 (사용한 숫자 버리기)
        if(n==0){
            break;
        }
    }
    
    return answer;
}