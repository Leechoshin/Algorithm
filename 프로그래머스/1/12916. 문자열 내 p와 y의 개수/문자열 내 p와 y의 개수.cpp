#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int count_p=0;
    int count_y=0;
    int size = s.size();
    
    while(true){
        for(int i=0;i<size;i++){
            if((s[i]=='p')||(s[i]=='P')){
                count_p++;
            }
            else if(s[i]=='y'||s[i]=='Y'){
                count_y++;
            }
            else continue;
        }
        break;
    }
    if(count_p == count_y){ answer = true;}
    else {answer = false;}
    
    return answer;
}