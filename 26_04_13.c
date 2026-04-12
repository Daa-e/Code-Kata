// 문제 설명
// 0부터 9까지의 숫자 중 일부가 들어있는 정수 배열 numbers가 매개변수로 주어집니다. 
// numbers에서 찾을 수 없는 0부터 9까지의 숫자를 모두 찾아 더한 수를 return 하도록 solution 함수를 완성해주세요.


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int numbers[], size_t numbers_len) {
    int total_sum = 45;
    int current_sum = 0;
    
    for (size_t i = 0; i < numbers_len; i++) {
        current_sum += numbers[i];
    }
    
    int answer = total_sum - current_sum;
    
    return answer;
}
