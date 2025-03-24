#include<iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, bool flag) {
    int answer = 0;
    if(flag==true){
        answer=a+b;
    }
    else answer=a-b;
    return answer;
}

int main(){
    int a,b;
    bool flag;
    cin>>a>>b>>flag;
    cout<<solution(a,b,flag);
    
    return 0;
}