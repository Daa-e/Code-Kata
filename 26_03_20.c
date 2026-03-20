// 문제 설명
// 정수를 담고 있는 배열 arr의 평균값을 return하는 함수, solution을 완성해보세요.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
double solution(int arr[], size_t arr_len) {
    double answer = 0;
    double sum = 0;
    
    for(int i = 0; i < arr_len; i++) {
        sum += arr[i];
    }
    
    answer = sum / arr_len;
    
    return answer;
}
