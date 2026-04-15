// 문제 설명
// 단어 s의 가운데 글자를 반환하는 함수, solution을 만들어 보세요. 단어의 길이가 짝수라면 가운데 두글자를 반환하면 됩니다.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* s) {
    int len = strlen(s);
    char* answer = (char*)malloc(sizeof(char) * 3);
    
    if (len % 2 == 0) {
        answer[0] = s[(len / 2) - 1];
        answer[1] = s[len / 2];
        answer[2] = '\0';
    } else {
        answer[0] = s[len / 2];
        answer[1] = '\0';
    }
    
    return answer;
}
