#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> number;
    int size=0;
    while(true){
        number.push_back(n%10);
        n = n / 10;
        size++;
        if(n==0){
            break;
        }
    }
    // 오름차순 정리 후
    sort(number.begin(),number.end());
    // 마지막 원소와 곱하여 더하기
    for(int i = size; i > 0 ; i--){
        answer+=(number[i-1]*(pow(10,i-1)));
    }
    
    return answer;
}