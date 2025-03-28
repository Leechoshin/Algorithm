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
        // 처음부터 지폐가 지갑보다 작으면 접을 필요가 없음.
        if(((wallet_size1 >= bill_size1) && (wallet_size2 >= bill_size2)) || ((wallet_size1 >= bill_size2) && (wallet_size2 >= bill_size1))){
            break;
        }
        
        // 크기가 더 큰 지폐를 반으로 접는다.
        // bill_size1이 더 큰 경우
        if(bill_size1 > bill_size2){
            bill_size1 = bill_size1 / 2;
             // 접을 때마다 answer++
                answer++;
            
            // 지폐의 크기가 지갑의 크기보다 작거나 같아지면 break 실행
            
            if(wallet_size1 > wallet_size2){
                // bill_size1이 더 커서 한번 접었기 때문에 더 큰 지갑 길이와 bill_size2 비교
                if(wallet_size1 >= bill_size2 && wallet_size2 >= bill_size1){
                    break;
                }
            }
            else {
                if((wallet_size2 >= bill_size2) && (wallet_size1 >= bill_size1)){
                break;
                }
            }
        }
        
        // bill_size2가 더 큰 경우
        else {
            bill_size2 = bill_size2 / 2;
            answer++;
            
            // bill_size2이 더 커서 한번 접었기 때문에 더 큰 지갑 길이와 bill_size1 비교
            if(wallet_size1 > wallet_size2){
                if(wallet_size1 >= bill_size1 && wallet_size2 >= bill_size2){
                    break;
                }
            }
            
           else {
                if((wallet_size2 >= bill_size1) && (wallet_size1 >= bill_size2)){
                break;
                }
            }
        }
        
    }
    
    // 접은 횟수 return
    return answer;
}