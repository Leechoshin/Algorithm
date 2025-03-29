#include <string>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long number = sqrt(n);
    
    if(number*number != n ){answer = -1;}
    // number가 1일 때도 가정
    else if(number*number == n || number == 1) {answer = (number+1)*(number+1);}
    return answer;
}