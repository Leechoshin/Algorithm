#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer= "";
    int num;
    int size = seoul.size();
    
    for(int i=0; i<size ; i++){
        if(seoul[i] == "Kim"){
            num = i;
            break;
        }
    }
    // 정수를 String으로 변환하는 함수 (to_string()) + string끼리 이어 붙일 때는 append 함수 사용
    answer.append("김서방은 "+to_string(num)+"에 있다");
    
    return answer;
}