
#include <string>
#include <vector>

using namespace std;
//함수
int Repetition(vector<int> numbers, int target, int count, int add_num, int answer) {

    if (count == numbers.size()) {
        if (target == add_num)
            answer++;
        return answer;

    }
    else {
        answer = Repetition(numbers, target, count+1, add_num + numbers[count], answer);
        answer = Repetition(numbers, target, count+1, (add_num + numbers[count] * (-1)), answer);
    }
    return answer;
}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    answer = Repetition(numbers, target, 0, 0, answer);

    return answer;
}
