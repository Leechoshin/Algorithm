#include <string>
#include <vector>

using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    
    // 지갑 크기 지정
    int wallet_size1 = wallet[0];
    int wallet_size2 = wallet[1];
    // 지폐 크기 지정
    int bill_size1 = bill[0];
    int bill_size2 = bill[1];
    
    while(true){
        // 지폐의 크기가 지갑의 크기보다 작아질 때까지 반복
        if(((wallet_size1 >= bill_size1) && (wallet_size2 >= bill_size2)) || ((wallet_size1 >= bill_size2) && (wallet_size2 >= bill_size1))){
            break;
        }
        
        if(bill_size1 > bill_size2){
            bill_size1 = bill_size1 / 2;
        }
        else bill_size2 = bill_size2 / 2;
        
        answer++;
    }
    // 접은 횟수 return
    return answer;
}