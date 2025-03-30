#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int num) {
    int answer = 0;
    int count=0;
    // 변수형 long으로 설정
    long number = num;
    if(number == 1) return 0;
    
    while(true){
        
        number = ( number%2==0 ) ? number/2 : number*3+1;
        count++;
         
         if(count == 500){
         return -1;
         break;
        }
        
         if(number == 1){
            answer = count;
            break;
        }
        
    
    }
    
    
    return answer;
}