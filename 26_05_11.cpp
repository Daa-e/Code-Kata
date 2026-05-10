// 문제 설명
// 숫자로 이루어진 문자열 t와 p가 주어질 때, t에서 p와 길이가 같은 부분문자열 중에서, 
// 이 부분문자열이 나타내는 수가 p가 나타내는 수보다 작거나 같은 것이 나오는 횟수를 return하는 함수 solution을 완성하세요.


#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int t_len = t.length();
    int p_len = p.length();
    long long p_value = stoll(p);

    for (int i = 0; i <= t_len - p_len; i++) {
        string sub = t.substr(i, p_len);
        long long sub_value = stoll(sub);
        if (sub_value <= p_value) {
            answer++;
        }
    }
    return answer;
}
