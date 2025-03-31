#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(int n) {
    string answer = "";
    if(n==1) return answer = "수";
    else if(n==2) return answer = "수박";
    
    while(true){
        // n이 짝수 일 때
        if(n%2 == 0){
            for(int i=0;i<n/2;i++){
                answer.append("수박");
            }
        }
        
        // n이 홀수 일 때
        else if(n%2 == 1){
            for(int i=0 ; i< n/2 ; i++){
                answer.append("수박");
            }
            answer.append("수");
        }
            break;
        }
    

    return answer;
}