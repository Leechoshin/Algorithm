#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    // 변수를 int형이 아닌 long long형으로 둬야함
    long long number = sqrt(n);
    
    if(number*number != n ){answer = -1;}
    
    else if(number*number == n || number == 1) {answer = (number+1)*(number+1);}
    return answer;
}