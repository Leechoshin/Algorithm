using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long ride_money=0;
    
    for(int i = 1; i <= count ; i++){
        ride_money += (i*price);
    }
    
    answer = money - ride_money;
    
    if(answer >= 0 ) return answer = 0;
    
    return -answer;
}