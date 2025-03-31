#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    
    for(int i = left ; i <= right ; i++){
        int count=0;
        while(true){
            // 약수의 개수 구하기
            for(int j =1; j <= i ; j++){
                if(i%j==0){
                    count++;
                }
            }
            break;
        }
        
        // 짝수 개면 더하고 홀수 개면 빼기
        if(count % 2 == 0){ answer += i; }
        else answer -= i;
        
    }
    return answer;
}