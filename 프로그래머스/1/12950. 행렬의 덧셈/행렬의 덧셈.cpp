#include <string>
#include <vector>

using namespace std;
// 구글링
vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    int size = arr1.size();
    
    for(int i=0;i<size;i++){
        vector<int> num;
        for(int j = 0 ; j<arr1[0].size() ;j++){
            //arr1[0]도 사용 가능
            num.push_back(arr1[i][j]+arr2[i][j]);
        }
        answer.push_back(num);
    }
    return answer;
}