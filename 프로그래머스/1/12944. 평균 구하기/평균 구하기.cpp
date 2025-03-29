#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    int size = arr.size();
    
    for(int i=0;i<size;i++){
        answer+=arr[i];
    }
    answer /= size;
    return answer;
}