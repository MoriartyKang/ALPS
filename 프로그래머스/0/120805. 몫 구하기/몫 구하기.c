#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = num1 / num2;
    return answer;
}

int main() {
    printf("%d\n", solution(10, 5));
    printf("%d\n", solution(7, 2));
    return 0;
}