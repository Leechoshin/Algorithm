#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 45;
    int size = numbers.size();
    
    for(int i=0;i<size;i++){
        answer -= numbers[i];
    }
    
    return answer;
}