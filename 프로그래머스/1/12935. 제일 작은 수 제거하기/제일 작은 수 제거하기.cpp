#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int minimum;
    
    // arr의 크기가 1일 경우
    if(arr.size()==1){
        answer.push_back(-1);
        return answer;
    }
    
    // 정렬 후 첫번째 원소 제거
    answer = arr;
    sort(arr.begin(),arr.end());
    minimum = arr[0];
    
    // 제일 작은 수 제거하기
    for(int i=0;i<answer.size();i++){
        if(answer[i]==minimum){
            answer.erase(answer.begin()+i);
        }
    }
    
    
    return answer;
}