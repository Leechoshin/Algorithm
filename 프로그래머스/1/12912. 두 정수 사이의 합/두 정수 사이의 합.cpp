#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    while(true){
        if(a>b){
            for(int i = b ; i<=a ; i++){
                answer+=i;
            }
            break;
        }
        
        else if(a==b){ answer = a; break;}
        else{
            for(int i=a ; i <= b ; i++){
                answer+=i;
            }
            break;
        }
        
    }
    return answer;
}