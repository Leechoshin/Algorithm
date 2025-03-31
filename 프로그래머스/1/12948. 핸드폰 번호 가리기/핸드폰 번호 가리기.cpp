#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    
    int size = phone_number.size();
    for(int i=0;i<size-4;i++){
        phone_number[i]='*';
    }
    answer = phone_number;
    return answer;
}