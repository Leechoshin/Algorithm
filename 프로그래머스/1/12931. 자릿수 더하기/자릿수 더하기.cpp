#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    int divide = 1;
    
    // 수의 자릿수 구하기 (100=3, 1000=4...)
    while(divide <= n){
        divide = divide * 10;
    }
    divide = divide / 10;
    
    // 각 자리의 합 구하기
    while(divide > 0){
        answer += (n / divide);
        n = n - (n / divide)*divide;
        divide = divide / 10;
    }
    
    return answer;
}