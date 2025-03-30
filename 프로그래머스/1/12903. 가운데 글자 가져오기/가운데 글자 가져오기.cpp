#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int size = s.size();
    // s의 길이가 짝수 일 때
    if(size%2 == 0){
        answer = s[size/2-1];
        answer += s[size/2];
    }
    
    // s의 길이가 홀수 일 때
    if(size%2 == 1)
    {
        answer = s[size/2];
    }
    return answer;
}