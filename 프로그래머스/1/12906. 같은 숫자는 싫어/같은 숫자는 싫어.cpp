#include <vector>
#include <iostream>
#include <stack>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int size = arr.size();
    int num = 0;
    answer.push_back(arr[0]);
    
    // 구글링
    // 스택/큐를 사용하지 않고 vector를 사용해서 문제 풀이 가능
    
    for(int i =1 ; i<size; i++){
        if(answer[num]!=arr[i]){
            answer.push_back(arr[i]);
            num++;
        }
    }
    

    return answer;
}