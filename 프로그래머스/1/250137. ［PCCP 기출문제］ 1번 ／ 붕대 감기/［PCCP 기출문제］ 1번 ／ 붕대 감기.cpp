#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int answer;
    int healing_time = bandage[0];
    int healing = bandage[1];
    int add_healing = bandage[2];
    int attack_time=0;
    int count=0; // 연속으로 회복하는 시간 체크 변수
    bool Get_attack; // 공격 시간 체크를 위한 bool
    
    answer=health;
    
    // 최대 시간 구하기
    for(int i=0;i<attacks.size();i++){
        attack_time = attacks[i][0];
    }
    
    
    for(int i=1 ;i <= attack_time ; i++){
        
        // 공격 시간에 공격 받을 때
        for(int j=0;j<attacks.size();j++){
            if(i==attacks[j][0]){
                Get_attack=true;
                answer-=attacks[j][1];
                count=0;
                break;
            }
            // 공격 시간이 없을 때
             if(i!=attacks[j][0]){
             Get_attack=false;
            }
            
        }
        
        // 공격 시간이 아닐 경우
        if(Get_attack==false){
        answer+=healing;
        count++;
        
        // 시전 시간 만족
        if(count==healing_time){
            answer+=add_healing;
            count=0;
        }
            
         // 체력보다 더 많이 힐링 될 경우
        if(answer>health){
        answer=health;
        }
        }
        
        // 체력이 0이하로 떨어지면 -1 return
        if(answer<=0){
                  answer=-1;
                  break;
        }
    }
    
    
    return answer;
}

