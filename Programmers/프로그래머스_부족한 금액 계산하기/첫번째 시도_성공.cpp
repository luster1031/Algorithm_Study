using namespace std;

long long solution(int price, int money, int count)
{
    long long sum_money = 0;
    for(int i = 1; i<=count; i++){
        sum_money += (price * i);
    }
    if (sum_money <= money)
        return 0;
    else
        return sum_money - money;
}
