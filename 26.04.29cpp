// 문제 설명
// 자연수 n이 매개변수로 주어집니다. n을 3진법 상에서 앞뒤로 뒤집은 후, 
// 이를 다시 10진법으로 표현한 수를 return 하도록 solution 함수를 완성해주세요.
  
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    string ternary = "";
    
    while (n > 0) {
        ternary += to_string(n % 3);
        n /= 3;
    }
    
    int answer = 0;
    int power = 1;
    
    for (int i = ternary.length() - 1; i >= 0; i--) {
        answer += (ternary[i] - '0') * power;
        power *= 3;
    }
    
    return answer;
}
